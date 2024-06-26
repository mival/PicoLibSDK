
// ****************************************************************************
//
//                                Multicore
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

// Core 1 stack (located in reserved section stack1)
#define CORE1_STACK_SIZE	(0x1000-BOOTLOADER_DATA) // core 1 stack size (= size of .stack1 section)
extern u32 __attribute__((section(".stack1"))) Core1Stack[CORE1_STACK_SIZE/4];

#if USE_MULTICORE	// use Multicore (sdk_multicore.c, sdk_multicore.h)

#ifndef _SDK_MULTICORE_H
#define _SDK_MULTICORE_H

#include "../sdk_addressmap.h"		// Register address offsets

#ifdef __cplusplus
extern "C" {
#endif

// === Multicore

typedef void (*pCore1Fnc)();			// core 1 exec function (can exit to stop core 1)


extern volatile Bool Core1IsRunning;	// flag that core 1 is running

// reset CPU core 1 (core 1 will send '0' to the FIFO when done)
void Core1Reset(void);

// start core 1 function (must be called from core 0)
//  entry ... entry into Core1 function (function can exit to stop core 1)
// Core1IsRunning ... flag that core 1 is running
// Both cores use the same VTOR interrupt table (handlers are shared) but have separate NVIC interrupt controllers.
void Core1Exec(pCore1Fnc entry);

// === Inter-core lockout (if need to stop other core during flash write)
// To lockout core 1 when writting to flash:
// - initialize lockout handler with LockoutInit(1)
// - start lockout of core 1 from core 0 with LockoutStart()
// - core 1 raises LockoutHandler() and wait
// - write flash from core 0
// - stop lockout of core 1 from core 0 with LockoutStop()
// - core 1 returns from lockout handler and continues in execution
// - deinitialize lockout handler with LockoutTerm(1)

#define LOCKOUT_MAGIC_START 0x73a8831eUL
#define LOCKOUT_MAGIC_END (~LOCKOUT_MAGIC_START)

// Lockout handler (must be in RAM and must not use flash functions - to enable flash writting from other core)
//  Name of alternative handler in Flash: isr_sio_proc0 and isr_sio_proc1
void NOFLASH(LockoutHandler)(void);

// initialize lockout handler for core 0 or 1
void LockoutInit(int core);

// deinitialize lockout handler for core 0 or 1 (disables IRQ handler)
void LockoutTerm(int core);

// start lockout other core
void LockoutStart(void);

// stop lockout other core
void LockoutStop(void);

// ----------------------------------------------------------------------------
//                          Original-SDK interface
// ----------------------------------------------------------------------------

#if USE_ORIGSDK		// include interface of original-SDK

// Reset core 1
INLINE void multicore_reset_core1(void) { Core1Reset(); }

// Run code on core 1
INLINE void multicore_launch_core1(void (*entry)(void)) { Core1Exec(entry); }

#endif // USE_ORIGSDK

#ifdef __cplusplus
}
#endif

#endif // _SDK_MULTICORE_H

#endif // USE_MULTICORE	// use Multicore (sdk_multicore.c, sdk_multicore.h)
