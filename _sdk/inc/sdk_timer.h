
// ****************************************************************************
//
//                                  Timer
//                         Precise Timer with Alarm
//
// ****************************************************************************
// PicoLibSDK - Alternative SDK library for Raspberry Pico and RP2040
// Copyright (c) 2023 Miroslav Nemecek, Panda38@seznam.cz, hardyplotter2@gmail.com
// 	https://github.com/Panda381/PicoLibSDK
//	https://www.breatharian.eu/hw/picolibsdk/index_en.html
//	https://github.com/pajenicko/picopad
//	https://picopad.eu/en/
// License:
//	This source code is freely available for any purpose, including commercial.
//	It is possible to take and modify the code or parts of it, without restriction.

// 64-bit timer with 1-us resolution and with 4 alarms.
// Time source is shared with watchdog counter.
// Alarm handler is shared between both processor cores. Only alarms of different numbers can be independent.

#if USE_TIMER	// use Timer with alarm (sdk_timer.c, sdk_timer.h)

#ifndef _SDK_TIMER_H
#define _SDK_TIMER_H

#include "../sdk_addressmap.h"		// Register address offsets
#include "sdk_irq.h"		// Register address offsets

#if USE_ORIGSDK		// include interface of original SDK
#include "orig/orig_timer.h"	// constants of original SDK
#endif // USE_ORIGSDK

#ifdef __cplusplus
extern "C" {
#endif

#define ALARMS_NUM	4		// number of timer alarms
#define NUM_TIMERS	ALARMS_NUM	// number of timer alarms

// === Timer (RP2040 datasheet page 553)

// timer hardware registers
//#define TIMER_BASE		0x40054000	// us timer
#define TIMER_TIMEHW ((volatile u32*)(TIMER_BASE + 0x00)) // latched write HIGH (write completely first LOW and then HIGH)
#define TIMER_TIMELW ((volatile u32*)(TIMER_BASE + 0x04)) // latched write LOW (write completely first LOW and then HIGH)
#define TIMER_TIMEHR ((volatile u32*)(TIMER_BASE + 0x08)) // latched read HIGH (read first LOW and then HIGH)
#define TIMER_TIMELR ((volatile u32*)(TIMER_BASE + 0x0C)) // latched read LOW (read first LOW and then HIGH)
#define TIMER_ALARM0 ((volatile u32*)(TIMER_BASE + 0x10)) // arm alarm 0 (fires if == TIMELR)
#define TIMER_ALARM1 ((volatile u32*)(TIMER_BASE + 0x14)) // arm alarm 1 (fires if == TIMELR)
#define TIMER_ALARM2 ((volatile u32*)(TIMER_BASE + 0x18)) // arm alarm 2 (fires if == TIMELR)
#define TIMER_ALARM3 ((volatile u32*)(TIMER_BASE + 0x1C)) // arm alarm 3 (fires if == TIMELR)
#define TIMER_ARMED ((volatile u32*)(TIMER_BASE + 0x20)) // bit 0..3: 1=alarm is armed, write 1 to disarm, write to alarm to arm
#define TIMER_TIMERAWH ((volatile u32*)(TIMER_BASE + 0x24)) // raw read HIGH
#define TIMER_TIMERAWL ((volatile u32*)(TIMER_BASE + 0x28)) // raw read LOW
#define TIMER_DBGPAUSE ((volatile u32*)(TIMER_BASE + 0x2C)) // bit 1: 1=pause timer during debug of CPU0, bit 2: ...of CPU1
#define TIMER_PAUSE ((volatile u32*)(TIMER_BASE + 0x30)) // bit 0: 1=pause timer
#define TIMER_INTR ((volatile u32*)(TIMER_BASE + 0x34)) // bit 0..3: raw interrupts
#define TIMER_INTE ((volatile u32*)(TIMER_BASE + 0x38)) // bit 0..3: interrupt enable
#define TIMER_INTF ((volatile u32*)(TIMER_BASE + 0x3C)) // bit 0..3: interrupt force
#define TIMER_INTS ((volatile u32*)(TIMER_BASE + 0x40)) // bit 0..3: interrupt status

#define TIMER_ALARM(alarm) ((volatile u32*)(TIMER_BASE + 0x10 + (alarm)*4)) // arm alarm 0..3 (fires if == TIMELR)

// timer hardware interface
typedef struct {
	io32	timehw;			// 0x00: Write to bits 63:32 of time
	io32	timelw;			// 0x04: Write to bits 31:0 of time
	io32	timehr;			// 0x08: Read from bits 63:32 of time
	io32	timelr;			// 0x0C: Read from bits 31:0 of time
	io32	alarm[ALARMS_NUM];	// 0x10: (4*4=0x10) Arm alarm, and configure the time it will fire
	io32	armed;			// 0x20: Indicates the armed/disarmed status of each alarm
	io32	timerawh;		// 0x24: Raw read from bits 63:32 of time (no side effects)
	io32	timerawl;		// 0x28: Raw read from bits 31:0 of time (no side effects)
	io32	dbgpause;		// 0x2C: Set bits high to enable pause when the corresponding debug ports are active
	io32	pause;			// 0x30: Set high to pause the timer
	io32	intr;			// 0x34: Raw Interrupts
	io32	inte;			// 0x38: Interrupt Enable
	io32	intf;			// 0x3C: Interrupt Force
	io32	ints;			// 0x40: Interrupt status after masking & forcing
} timer_hw_t;

#define timer_hw ((timer_hw_t*)TIMER_BASE)

STATIC_ASSERT(sizeof(timer_hw_t) == 0x44, "Incorrect timer_hw_t!");

// get IRQ number IRQ_TIMER_0..IRQ_TIMER_3 for alarm 0..3
#define ALARM_IRQ(alarm) (IRQ_TIMER_0 + (alarm))

// claimed alarms (0..3)
extern u8 AlarmClaimed;		// claimed alarms

// === get time

// get 32-bit absolute system time LOW in [us]
INLINE u32 Time(void) { return timer_hw->timerawl; }

// get 16-bit absolute system time in [ms] - not accurate, time in [us] is divided by 1024
INLINE u16 TimeMs(void) { return (u16)(Time()>>10); }

// get 64-bit absolute system time in [us] - fast method, but it is not atomic safe
//   - do not use simultaneously from both processor cores and from interrupts
u64 Time64Fast(void);

// get 64-bit absolute system time in [us] - atomic method (concurrently safe)
u64 Time64(void);

// wait for delay in [us] (max. 71 minutes, 4'294'967'295 us)
void WaitUs(u32 us);

// wait for delay in [ms] (max. 71 minutes, 4'294'967 ms)
void WaitMs(int ms);

// === claim alarm
// Functions are not atomic safe! (not recommended to be used in both cores or in IRQ at the same time)

// claim alarm (mark it as used)
INLINE void AlarmClaim(int alarm) { AlarmClaimed |= (u8)BIT(alarm); }

// unclaim alarm (mark it as not used)
INLINE void AlarmUnclaim(int alarm) { AlarmClaimed &= (u8)~BIT(alarm); }

// check if alarm is claimed
INLINE Bool AlarmIsClaimed(int alarm) { return (AlarmClaimed & (u8)BIT(alarm)) != 0; }

// claim free alarm (returns -1 on error)
s8 AlarmClaimFree(void);

// === alarm interrupt

#if USE_IRQ	// use IRQ interrupts (sdk_irq.c, sdk_irq.h)

// start alarm
//   alarm = alarm number 0..3
//   handler = interrupt handler
//   time = time interval in [us] after which to activate first alarm (min 0 us, max 71 minutes)
// Vector table must be located in RAM.
// If vector table is not in RAM, use services with names isr_timer_0..isr_timer_3
// Call AlarmAck on start of interrupt, then AlarmRestart to restart again, or AlarmStop to deactivate.
// Alarm handler is shared between both processor cores. Only alarms of different numbers can be independent.
void AlarmStart(int alarm, irq_handler_t handler, u32 time);

// force alarm
INLINE void AlarmForce(int alarm) { RegSet(&timer_hw->intf, BIT(alarm)); }

// unforce alarm
INLINE void AlarmUnforce(int alarm) { RegClr(&timer_hw->intf, BIT(alarm)); }

// check if alarm is forced
INLINE Bool AlarmIsForced(int alarm) { return ((timer_hw->intf & BIT(alarm)) != 0); }

// acknowledge alarm 0..3 interrupt - should be called at start of interrupt handler
//   Alarm will be disarmed automatically when it is triggered
INLINE void AlarmAck(int alarm) { timer_hw->intr = BIT(alarm); }

// check alarm pending status
INLINE Bool AlarmIsPending(int alarm) { return ((timer_hw->ints & BIT(alarm)) != 0); }

// restart alarm - can be called from an interrupt for a repeated alarm
//   time = time interval in [us] after which to activate next alarm (max 71 minutes)
// The maximum achievable interrupt frequency is about 100 kHz.
void AlarmRestart(int alarm, u32 time);

// stop alarm - can be called from an interrupt if no next interrupt is required
void AlarmStop(int alarm);

#endif // USE_IRQ

// ----------------------------------------------------------------------------
//                          Original-SDK interface
// ----------------------------------------------------------------------------

#if USE_ORIGSDK		// include interface of original SDK

// Callback function type for hardware alarms
typedef void (*hardware_alarm_callback_t)(uint alarm_num);

// get IRQ number
INLINE uint harware_alarm_irq_number(uint alarm_num) { return ALARM_IRQ(alarm_num); }

// convert absolute time to number of [us]
INLINE u64 to_us_since_boot(absolute_time_t t) { return (u64)t; }

// update an absolute_time_t value to represent a given number of microseconds since boot
INLINE void update_us_since_boot(absolute_time_t *t, u64 us_since_boot) { *t = us_since_boot; }

// convert a number of microseconds since boot to an absolute_time_t
INLINE absolute_time_t from_us_since_boot(u64 us_since_boot) { return (absolute_time_t)us_since_boot; }

// get absolute time
INLINE absolute_time_t get_absolute_time(void) { return (absolute_time_t)Time64(); }

// convert [us] to [ms]
INLINE u32 us_to_ms(u64 us) { return ((us >> 32) != 0) ? (u32)(us/1000) : ((u32)us)/1000; }

// Convert a timestamp into a number of milliseconds since boot.
INLINE u32 to_ms_since_boot(absolute_time_t t) { return us_to_ms((u64)t); }

// Return a timestamp value obtained by adding a number of microseconds to another timestamp
INLINE absolute_time_t delayed_by_us(const absolute_time_t t, u64 us) { return (absolute_time_t)((u64)t + us); }

// Return a timestamp value obtained by adding a number of milliseconds to another timestamp
INLINE absolute_time_t delayed_by_ms(const absolute_time_t t, u32 ms) { return delayed_by_us(t, ms*1000ull); }

// Convenience method to get the timestamp a number of microseconds from the current time
INLINE absolute_time_t make_timeout_time_us(u64 us) { return delayed_by_us(get_absolute_time(), us); }

// Convenience method to get the timestamp a number of milliseconds from the current time
INLINE absolute_time_t make_timeout_time_ms(u32 ms) { return delayed_by_ms(get_absolute_time(), ms); }

// Return the difference in microseconds between two timestamps
INLINE s64 absolute_time_diff_us(absolute_time_t from, absolute_time_t to) { return (s64)((u64)to - (u64)from); }

// Return the earlier of two timestamps
INLINE absolute_time_t absolute_time_min(absolute_time_t a, absolute_time_t b) { return ((u64)a < (u64)b) ? a : b; }

// Wait until after the given timestamp to return
INLINE void sleep_until(absolute_time_t target) { s64 dif = (u64)target - Time64(); if (dif > 0) WaitUs((u32)dif); }

// Wait for the given number of microseconds before returning
INLINE void sleep_us(u64 us) { WaitUs((u32)us); }

// Wait for the given number of milliseconds before returning
INLINE void sleep_ms(u32 ms) { WaitMs(ms); }

// Return a 32 bit timestamp value in microseconds
INLINE u32 time_us_32(void) { return Time(); }

// Return the current 64 bit timestamp value in microseconds
INLINE u64 time_us_64(void) { return Time64(); }

// Busy wait wasting cycles for the given (32 bit) number of microseconds
INLINE void busy_wait_us_32(u32 delay_us) { WaitUs(delay_us); }

// Busy wait wasting cycles for the given (64 bit) number of microseconds
INLINE void busy_wait_us(u64 delay_us) { WaitUs((u32)delay_us); }

// Busy wait wasting cycles for the given number of milliseconds
INLINE void busy_wait_ms(u32 delay_ms) { WaitMs(delay_ms); }

// Busy wait wasting cycles until after the specified timestamp
INLINE void busy_wait_until(absolute_time_t t)
{
	u64 now = Time64();
	if ((u64)t > now) WaitUs((u32)((u64)t - now));
}

// Check if the specified timestamp has been reached
INLINE bool time_reached(absolute_time_t t) { return Time64() >= (u64)t; }

// Helper method for blocking on a timeout
INLINE bool best_effort_wfe_or_timeout(absolute_time_t timeout_timestamp) { return time_reached(timeout_timestamp); }

// cooperatively claim the use of this hardware alarm_num
INLINE void hardware_alarm_claim(uint alarm_num) { AlarmClaim(alarm_num); }

// cooperatively claim the use of this hardware alarm_num
INLINE int hardware_alarm_claim_unused(bool required) { return AlarmClaimFree(); }

// cooperatively release the claim on use of this hardware alarm_num
INLINE void hardware_alarm_unclaim(uint alarm_num) { AlarmUnclaim(alarm_num); }

// Determine if a hardware alarm has been claimed
INLINE bool hardware_alarm_is_claimed(uint alarm_num) { return AlarmIsClaimed(alarm_num); }

// Enable/Disable a callback for a hardware timer on this core
void hardware_alarm_set_callback(uint alarm_num, hardware_alarm_callback_t callback);

// Set the current target for the specified hardware alarm
bool hardware_alarm_set_target(uint alarm_num, absolute_time_t target);

// Cancel an existing target (if any) for a given hardware_alarm
void hardware_alarm_cancel(uint alarm_num);

// Force and IRQ for a specific hardware alarm
void hardware_alarm_force_irq(uint alarm_num);

// === alarm pool, timers

// identifier of alarm
typedef s32 alarm_id_t;

// alarm pool
typedef struct alarm_pool alarm_pool_t;

// User alarm callback
//  return <0 to reschedule the same alarm this many us from the time the alarm was previously scheduled to fire
//  return >0 to reschedule the same alarm this many us from the time this method returns
//  return 0 to not reschedule the alarm
typedef s64 (*alarm_callback_t)(alarm_id_t id, void *user_data);

// Create the default alarm pool (if not already created or disabled)
INLINE void alarm_pool_init_default(void) {}

// The default alarm pool used when alarms are added without specifying an alarm pool,
INLINE alarm_pool_t* alarm_pool_get_default(void) { return (alarm_pool_t*)NULL; }

// Create an alarm pool
INLINE alarm_pool_t* alarm_pool_create(uint hardware_alarm_num, uint max_timers) { return (alarm_pool_t*)NULL; }

// Create an alarm pool, claiming an used hardware alarm to back it.
INLINE alarm_pool_t* alarm_pool_create_with_unused_hardware_alarm(uint max_timers) { return (alarm_pool_t*)NULL; }

// Return the hardware alarm used by an alarm pool
INLINE uint alarm_pool_hardware_alarm_num(alarm_pool_t *pool) { return 0; }

// Return the core number the alarm pool was initialized on (and hence callbacks are called on)
INLINE uint alarm_pool_core_num(alarm_pool_t *pool) { return 0; }

// Destroy the alarm pool, cancelling all alarms and freeing up the underlying hardware alarm
INLINE void alarm_pool_destroy(alarm_pool_t *pool) {}

// Add an alarm callback to be called at a specific time
alarm_id_t alarm_pool_add_alarm_at(alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback, void *user_data, bool fire_if_past);

// Add an alarm callback to be called after a delay specified in microseconds
INLINE alarm_id_t alarm_pool_add_alarm_in_us(alarm_pool_t *pool, u64 us, alarm_callback_t callback, void *user_data, bool fire_if_past)
	{ return alarm_pool_add_alarm_at(pool, delayed_by_us(get_absolute_time(), us), callback, user_data, fire_if_past); }

// Add an alarm callback to be called after a delay specified in milliseconds
INLINE alarm_id_t alarm_pool_add_alarm_in_ms(alarm_pool_t *pool, u32 ms, alarm_callback_t callback, void *user_data, bool fire_if_past)
	{ return alarm_pool_add_alarm_at(pool, delayed_by_ms(get_absolute_time(), ms), callback, user_data, fire_if_past); }

// Cancel an alarm
bool alarm_pool_cancel_alarm(alarm_pool_t *pool, alarm_id_t alarm_id);

// Add an alarm callback to be called at a specific time
INLINE alarm_id_t add_alarm_at(absolute_time_t time, alarm_callback_t callback, void *user_data, bool fire_if_past)
	{ return alarm_pool_add_alarm_at(alarm_pool_get_default(), time, callback, user_data, fire_if_past); }

// Add an alarm callback to be called after a delay specified in microseconds
INLINE alarm_id_t add_alarm_in_us(u64 us, alarm_callback_t callback, void *user_data, bool fire_if_past)
	{ return alarm_pool_add_alarm_in_us(alarm_pool_get_default(), us, callback, user_data, fire_if_past); }

// Add an alarm callback to be called after a delay specified in milliseconds
INLINE alarm_id_t add_alarm_in_ms(uint32_t ms, alarm_callback_t callback, void *user_data, bool fire_if_past)
	{ return alarm_pool_add_alarm_in_ms(alarm_pool_get_default(), ms, callback, user_data, fire_if_past); }

// Cancel an alarm from the default alarm pool
INLINE bool cancel_alarm(alarm_id_t alarm_id)
	{ return alarm_pool_cancel_alarm(alarm_pool_get_default(), alarm_id); }

// repeating_timer repeating_timer
typedef struct repeating_timer repeating_timer_t;

// Callback for a repeating timer
typedef bool (*repeating_timer_callback_t)(repeating_timer_t *rt);

// Information about a repeating timer
struct repeating_timer
{
	s64				delay_us;
	alarm_pool_t*			pool;
	alarm_id_t			alarm_id;
	repeating_timer_callback_t	callback;
	void*				user_data;
};

// Add a repeating timer that is called repeatedly at the specified interval in microseconds
bool alarm_pool_add_repeating_timer_us(alarm_pool_t *pool, s64 delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out);

// Add a repeating timer that is called repeatedly at the specified interval in microseconds
INLINE bool add_repeating_timer_us(int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out)
	{ return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_us, callback, user_data, out); }

// Add a repeating timer that is called repeatedly at the specified interval in milliseconds
INLINE bool add_repeating_timer_ms(s32 delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out)
	{ return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_ms * (s64)1000, callback, user_data, out); }

// Cancel a repeating timer
bool cancel_repeating_timer(repeating_timer_t *timer);

#endif // USE_ORIGSDK

#ifdef __cplusplus
}
#endif

#endif // _SDK_TIMER_H

#endif // USE_TIMER	// use Timer with alarm (sdk_timer.c, sdk_timer.h)
