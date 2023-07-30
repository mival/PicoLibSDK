
// ****************************************************************************
//
//                 USB Test and Measurement Device Class (device)
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

// This code is based on TinyUSB library, Copyright (c) 2019 Ha Thach (tinyusb.org)

#if USE_USB		// use USB (sdk_usb_*.c, sdk_usb_*.h)
#if USE_USB_DEV		// use USB Device Class Driver (sdk_usb_dev.c, sdk_usb_dev.h)
#if USE_USB_DEV_TMC	// use USB TMC Test and Measurement Class (device)

#ifndef _SDK_USB_TMCD_H
#define _SDK_USB_TMCD_H

#include "sdk_usb_def.h"	// definitions

#ifdef __cplusplus
extern "C" {
#endif

// initialize class driver
void TmcdInit();

// reset class driver
void TmcdReset();

// open device class interface (returns size of used interface, 0=not supported)
u16 TmcdOpen(const sUsbDescItf* itf, u16 max_len);

// control request callback (returns False to stall)
Bool TmcdCtrlReq(u8 stage, const sUsbSetupPkt* setup);

// transfer complete callback
Bool TmcdXferComp(u8 epinx, u8 xres, u16 len);

#ifdef __cplusplus
}
#endif

#endif // _SDK_USB_TMCD_H

#endif // USE_USB_DEV_TMC	// use USB TMC Test and Measurement Class (device)
#endif // USE_USB_DEV		// use USB Device Class Driver (sdk_usb_dev.c, sdk_usb_dev.h)
#endif // USE_USB		// use USB (sdk_usb_*.c, sdk_usb_*.h)
