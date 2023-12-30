
// ****************************************************************************
//
//                              PicoPad LEDs
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

#if USE_PICOPAD

#ifndef _PICOPAD_LED_H
#define _PICOPAD_LED_H

#ifdef __cplusplus
extern "C" {
#endif

// LED indices
#define LED1		0	// LED1 index (yellow USR, on the left)
#define LED2		1	// LED internal index (green, on Pico board)

#define LED_NUM		2	// number of LEDs

// GPIO with LED
extern const u8 LedGpioTab[LED_NUM];

// GPIO invert flag
extern const Bool LedGpioTabInv[LED_NUM];

// set LED ON (inx = LED index LED?_INX)
void LedOn(u8 inx);

// set LED OFF (inx = LED index LED?_INX)
void LedOff(u8 inx);

// flip LED (inx = LED index LED?_INX)
void LedFlip(u8 inx);

// set LED (inx = LED index LED?)
void LedSet(u8 inx, u8 val);

// initialize LEDs
void LedInit();

// terminate LEDs
void LedTerm();

#ifdef __cplusplus
}
#endif

#endif // _PICOPAD_LED_H

#endif // USE_PICOPAD
