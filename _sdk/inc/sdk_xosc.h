
// ****************************************************************************
//
//                                   XOSC
//                            crystal oscillator
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

// Raspberry Pico uses 12MHz crystal. RP2040 supports 1MHz to 15MHz crystals.
// (RP2040 datasheet page 234)

#if USE_XOSC	// use XOSC crystal oscillator (sdk_xosc.c, sdk_xosc.h)

#ifndef _SDK_XOSC_H
#define _SDK_XOSC_H

#include "../sdk_addressmap.h"		// Register address offsets
#include "sdk_clocks.h"			// clocks

#if USE_ORIGSDK		// include interface of original SDK
#include "orig/orig_xosc.h"	// constants of original SDK
#endif // USE_ORIGSDK

#ifdef __cplusplus
extern "C" {
#endif

// XOSC hardware registers
//#define XOSC_BASE		0x40024000	// XOSC crystal oscillator
#define XOSC_CTRL	((volatile u32*)(XOSC_BASE+0x00)) // control
#define XOSC_STATUS	((volatile u32*)(XOSC_BASE+0x04)) // status
#define XOSC_DORMANT	((volatile u32*)(XOSC_BASE+0x08)) // dormant control
#define XOSC_STARTUP	((volatile u32*)(XOSC_BASE+0x0C)) // startup delay
#define XOSC_COUNT	((volatile u32*)(XOSC_BASE+0x1C)) // down counter (stops at 0)

// XOSC hardware interface
typedef struct {
	io32	ctrl;		// 0x00: Crystal Oscillator Control
	io32	status;		// 0x04: Crystal Oscillator Status
	io32	dormant;	// 0x08: Crystal Oscillator pause control
	io32	startup;	// 0x0C: Controls the startup delay
	io32	_pad0[3];	// 0x10:
	io32	count;		// 0x1C: A down counter running at the xosc frequency which counts to zero and stops
} xosc_hw_t;

#define xosc_hw ((xosc_hw_t*)XOSC_BASE)

STATIC_ASSERT(sizeof(xosc_hw_t) == 0x20, "Incorrect xosc_hw_t!");

// XOSC startup delay (12MHz, 1 ms): del = (freq x delay) / 256
#define XOSC_STARTUP_DELAY_MS	1	// XOSC startup in [ms]
#define XOSC_STARTUP_DELAY (((XOSC_MHZ * 1000 * XOSC_STARTUP_DELAY_MS) + 128) / 256) // = 47

// Enable crystal oscillator
INLINE void XoscEnable(void) { RegMask(&xosc_hw->ctrl, 0xFAB << 12, 0xFFF << 12); }

// Disable crystal oscillator (cannot be disabled, if CPU uses it as a clock source)
INLINE void XoscDisable(void) { RegMask(&xosc_hw->ctrl, 0xD1E << 12, 0xFFF << 12); }

// initialize crystal oscillator
void XoscInit(void);

// start dormant mode of the crystal oscillator
INLINE void XoscDormant(void) { xosc_hw->dormant = 0x636f6d61; }

// wake up crystal oscillator from dormant mode
INLINE void XoscWake(void) { xosc_hw->dormant = 0x77616b65; }

// check if crystal oscillator is running and stable
INLINE Bool XoscIsStable(void) { return (xosc_hw->status & B31) != 0; }

// wait for stable state of crystal oscillator (XOSC must be enabled)
INLINE void XoscWait(void) { while (!XoscIsStable()) {} }

// set counter of crystal oscillator
INLINE void XoscSetCount(u8 count) { *XOSC_COUNT = count; }

// get counter of crystal oscillator (after setting the value, it runs down to zero and stops there)
INLINE u8 XoscGetCount(void) { return (u8)xosc_hw->count; }

// ----------------------------------------------------------------------------
//                          Original-SDK interface
// ----------------------------------------------------------------------------

#if USE_ORIGSDK		// include interface of original SDK

// Initialise the crystal oscillator system
INLINE void xosc_init(void) { XoscInit(); }

// Disable the Crystal oscillator
INLINE void xosc_disable(void) { XoscDisable(); }

// Set the crystal oscillator system to dormant
INLINE void xosc_dormant(void) { XoscDormant(); XoscWait(); }

#endif // USE_ORIGSDK

#ifdef __cplusplus
}
#endif

#endif // _SDK_XOSC_H

#endif // USE_XOSC	// use XOSC crystal oscillator (sdk_xosc.c, sdk_xosc.h)
