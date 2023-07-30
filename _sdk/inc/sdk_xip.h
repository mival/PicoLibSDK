
// ****************************************************************************
//
//                            XIP flash control
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

//XIP_CTRL_BASE

#ifndef _SDK_XIP_H
#define _SDK_XIP_H

#include "../sdk_addressmap.h"		// Register address offsets

#ifdef __cplusplus
extern "C" {
#endif

//#define XIP_CTRL_BASE		0x14000000
#define XIP_CTRL	((volatile u32*)(XIP_CTRL_BASE + 0x00)) // control
#define XIP_FLUSH	((volatile u32*)(XIP_CTRL_BASE + 0x04)) // flush
#define XIP_STAT	((volatile u32*)(XIP_CTRL_BASE + 0x08)) // status
#define XIP_CTRL_HIT	((volatile u32*)(XIP_CTRL_BASE + 0x0C)) // cache hit counter
#define XIP_CTRL_ACC	((volatile u32*)(XIP_CTRL_BASE + 0x10)) // cache access counter

// flush flash cache, does not wait
INLINE void FlashCacheFlush() { *XIP_FLUSH = 1; }

// flush flash cache and wait to complete
void FlashCacheFlushWait();

// enable flash cache
INLINE void FlashCacheEnable() { RegSet(XIP_CTRL, B0); }

// disable flash cache
INLINE void FlashCacheDisable() { RegClr(XIP_CTRL, B0); }

#ifdef __cplusplus
}
#endif

#endif // _SDK_XIP_H
