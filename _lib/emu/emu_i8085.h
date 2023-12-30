
// ****************************************************************************
//
//                              I8085 CPU Emulator
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

// I8085, I8085A CPU speed: 3 MHz
// I8085-2, I8085A-2 CPU speed: 5 MHz
// I8085AH-1 CPU speed: 6 MHz

#if USE_EMU_I8085		// use I8085 CPU emulator

// flags
#define I8085_C_BIT		0	// carry
#define I8085_V_BIT		1	// signed overflow
#define I8085_P_BIT		2	// parity (0=odd parity, 1=even parity)
//				3	// always 0
#define I8085_AC_BIT		4	// auxiliary carry from bit 3 to bit 4
#define I8085_K_BIT		5	// signed overflow/underflow of INX/DEX (not affected by DAD instruction), on arithmetics K = V ^ S
// K flag: https://www.righto.com/2013/02/looking-at-silicon-to-understanding.html
#define I8085_Z_BIT		6	// zero
#define I8085_S_BIT		7	// sign

#define I8085_C		BIT(I8085_C_BIT)	// 0x01 carry
#define I8085_V		BIT(I8085_V_BIT)	// 0x02 signed overflow
#define I8085_P		BIT(I8085_P_BIT)	// 0x04 parity
#define I8085_AC	BIT(I8085_AC_BIT)	// 0x10 auxiliary carry
#define I8085_K		BIT(I8085_K_BIT)	// 0x20 signed underflow
#define I8085_Z		BIT(I8085_Z_BIT)	// 0x40 zero
#define I8085_S		BIT(I8085_S_BIT)	// 0x80 sign

#define I8085_FLAGALL	(B0+B1+B2+B4+B5+B6+B7)	// mask of valid flags
#define I8085_FLAGDEF	0			// default flags

#define I8085_CLOCKMUL	8	// clock multiplier (to achieve lower frequencies and finer timing)

// function to read Serial Input Data Bit (returns 0 or 1)
typedef u8 (*pI8085GetSID)();

// function to write Serial Output Data Bit (val = 0 or 1)
typedef void (*pI8085SetSOD)(u8 val);

// I8085 CPU descriptor
// - Keep compatibility of the structure with the #define version in machine code!
// - Entries must be aligned
// - thumb1 on RP2040: offset of byte fast access must be <= 31, word fast access <= 62, dword fast access <= 124
typedef struct {

	sEmuSync	sync;		// 0x00: (8) time synchronization
// align
	union { u16 pc; struct { u8 pcl, pch; }; }; // 0x08: program counter PC
	union { u16 sp; struct { u8 spl, sph; }; }; // 0x0A: stack pointer SP
// align
	union { u32 afbc;
		struct {
			union { u16 af; struct { u8 f, a; }; };	// 0x0C: registers A (high) and F (low)
			union { u16 bc; struct { u8 c, b; }; };	// 0x0E: registers B (high) and C (low)
		};
	};
// align
	union { u32 dehl;
		struct {
			union { u16 de; struct { u8 e, d; }; };	// 0x10: registers D (high) and E (low)
			union { u16 hl; struct { u8 l, h; }; };	// 0x12: registers H (high) and L (low)
		};
	};
// align
	u8		intmask;	// 0x14: interrupt mask (as read with RIM instruction)
					//	bit 0: interrupt mask RST5.5 (1=masked=disabled, 0=available) ... also disabled when global interrupt is disabled
					//	bit 1: interrupt mask RST6.5 (1=masked=disabled, 0=available) ... also disabled when global interrupt is disabled
					//	bit 2: interrupt mask RST7.5 (1=masked=disabled, 0=available) ... also disabled when global interrupt is disabled
					//	bit 3: interrupt enable flag IE (1=enabled) ... identical to INTE pin
					//	bit 4: pending interrupt 15 (1=pending) ... level triggered interrupt
					//	bit 5: pending interrupt 16 (1=pending) ... level triggered interrupt
					//	bit 6: pending interrupt 17 (1=pending) ... this flag is flip-flop set by rising edge
	u8		ie;		// 0x15: global interrupt enable flag (0=disable interrupts, 1=enable interrupts)
					//   - also can disable RST5.5, RST6.5 and RST7.5 (TRAP will not be disabled)
	u8		tid;		// 0x16: temporary interrupt disable flag (1 instruction after enabling IE)
	u8		halted;		// 0x17: 1=CPU is halted (HALT instruction)
// align
	u8		intreq;		// 0x18: 1=interrupt request, execute instruction RST n
	u8		intins;		// 0x19: instruction RST n to execute during interrupt
	volatile u8	stop;		// 0x1A: 1=request to stop (pause) program execution
	u8		res;		// 0x1B: ... reserved (align)
// align
	pEmu16Read8	readmem;	// 0x1C: read byte from memory
	pEmu16Write8	writemem;	// 0x20: write byte to memory
	pEmu8Read8	readio;		// 0x24: read byte from port
	pEmu8Write8	writeio;	// 0x28: write byte to port
	pI8085GetSID	readsid;	// 0x2C: read Serial Input Data Bit (returns 0 or 1)
	pI8085SetSOD	writesod;	// 0x30: write Serial Output Data Bit (val = 0 or 1)

} sI8085;

STATIC_ASSERT(sizeof(sI8085) == 0x2C, "Incorrect sI8085!");

// current CPU descriptor (NULL = not running)
extern volatile sI8085* I8085_Cpu;

// initialize I8085 tables
void I8085_InitTab();

// initialize time synchronization (initialize PWM counter; returns real emulated frequency in Hz)
//  pwm ... index of (unused) PWM slice (0..7)
//  freq ... required emulated frequency in Hz (for 125 MHz system clock supported range: 64 kHz to 12 MHz)
// To achieve accurate timing, an integer ratio between system clock and clock frequency*I8008_CLOCKMUL is recommended to maintain.
INLINE u32 I8085_SyncInit(sI8085* cpu, int pwm, u32 freq) { return (EmuSyncInit(&cpu->sync, pwm, freq*I8085_CLOCKMUL) + I8085_CLOCKMUL/2)/I8085_CLOCKMUL; }

// reset processor
void I8085_Reset(sI8085* cpu);

// start time synchronization (= sets "time 0"; should be called before first program execution)
INLINE void I8085_SyncStart(sI8085* cpu) { EmuSyncStart(&cpu->sync); }

// execute program (start or continue, until "stop" request)
//  C code size in RAM: 8708 bytes (optimization -Os)
void NOFLASH(I8085_Exec)(sI8085* cpu);

// terminate time synchronization (stop PWM counter)
//  pwm ... index of used PWM slice (0..7)
INLINE void I8085_SyncTerm(int pwm) { EmuSyncTerm(pwm); }

// start emulation on core 1 (initialize synchronization, reset processor, start synchronization, execute program in core 1)
//  cpu ... pointer to CPU structure (fill-up entries before start: test, readrom, writerom, writeramport, writeromport, readromport)
//  pwm ... index of (unused) PWM slice (0..7)
//  freq ... required emulated frequency in Hz (for 125 MHz system clock supported range: 62 kHz to 12 MHz)
// Returns real emulated frequency in Hz.
// To achieve accurate timing, an integer ratio between system clock and clock frequency*I8008_CLOCKMUL is recommended to maintain.
u32 I8085_Start(sI8085* cpu, int pwm, u32 freq);

// stop emulation
//  pwm ... index of used PWM slice (0..7)
void I8085_Stop(int pwm);

// continue emulation without restart processor
u32 I8085_Cont(sI8085* cpu, int pwm, u32 freq);

// check if emulation is running
INLINE Bool I8085_IsRunning() { return I8085_Cpu != NULL; }

#endif // USE_EMU_I8085
