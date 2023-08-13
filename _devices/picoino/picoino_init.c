
// ****************************************************************************
//
//                              Picoino Init
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

#include "../../global.h"	// globals
#include "../../_display/qvga/qvga.h" // QVGA display
#include "../../_lib/inc/lib_pwmsnd.h"
#include "../../_lib/inc/lib_fat.h"
#include "../../_lib/inc/lib_sd.h"
#include "../../_lib/inc/lib_qdraw.h"
#include "../../_sdk/inc/sdk_gpio.h"
#include "../../_sdk/inc/sdk_timer.h"
#include "picoino_init.h"
#include "picoino_bat.h"
#include "picoino_key.h"
#include "picoino_keymini.h"

// Device init
void DeviceInit()
{
	// start QVGA on CPU 1 (must be paired with QVgaStop)
	QVgaStart();

	// initialize QDraw
#if USE_QVGA > 1
	pDrawBuf = BackBuf; // back drawing buffer
#else
	pDrawBuf = FrameBuf; // frame buffer
#endif

	// init battery measurement
	BatInit();

	// initilize keys
	KeyInit();

#if USE_PWMSND		// use PWM sound output; set 1.. = number of channels (lib_pwmsnd.c, lib_pwmsnd.h)
	// initialize PWM sound output (must be re-initialized after changing CLK_SYS system clock)
	PWMSndInit();
#endif

#if USE_SD		// use SD card (lib_sd.c, lib_sd.h)
	// initialize SD card interface (must be re-initialized after changing system clock)
	SDInit();
#endif
}

// Device terminate
void DeviceTerm()
{
	// terminate QVGA on CPU 1 (must be paired with QVgaStart)
	QVgaStop();

	// terminate keys
	KeyTerm();

	// terminate battery measurement
	BatTerm();

#if USE_PWMSND	// use PWM sound output; set 1.. = number of channels (lib_pwmsnd.c, lib_pwmsnd.h)
	// terminate PWM sound output
	PWMSndTerm();
#endif

#if USE_SD		// use SD card (lib_sd.c, lib_sd.h)
	// terminate SD card interface
	SDTerm();
#endif
}

// LED indices
#if USE_PICOINOMINI

// set LED ON (inx = LED index LED?)
void LedOn(u8 inx)
{
	if (inx == LED1) UserLedState = True;
	if (inx == LED2) GPIO_Out1(LED_PIN);
}

// set LED OFF (inx = LED index LED?)
void LedOff(u8 inx)
{
	if (inx == LED1) UserLedState = False;
	if (inx == LED2) GPIO_Out0(LED_PIN);
}

// flip LED (inx = LED index LED?)
void LedFlip(u8 inx)
{
	if (inx == LED1) UserLedState = !UserLedState;
	if (inx == LED2) GPIO_Flip(LED_PIN);
}

// set LED (inx = LED index LED?)
void LedSet(u8 inx, u8 val)
{
	if (val == 0) LedOff(inx); else LedOn(inx);
}

#else // USE_PICOINOMINI

// set LED ON (inx = LED index LED?)
void LedOn(u8 inx)
{
	if (inx == LED1) GPIO_Out1(LED_PIN);
}

// set LED OFF (inx = LED index LED?)
void LedOff(u8 inx)
{
	if (inx == LED1) GPIO_Out0(LED_PIN);
}

// flip LED (inx = LED index LED?)
void LedFlip(u8 inx)
{
	if (inx == LED1) GPIO_Flip(LED_PIN);
}

// set LED (inx = LED index LED?)
void LedSet(u8 inx, u8 val)
{
	if (val == 0) LedOff(inx); else LedOn(inx);
}

#endif // USE_PICOINOMINI
