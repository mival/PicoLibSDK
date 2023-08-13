
// ****************************************************************************
//
//                          Display controller ST7789
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

#if USE_ST7789		// use ST7789 TFT display (st7789.c, st7789.h)

#ifndef _ST7789_H
#define _ST7789_H

#ifdef __cplusplus
extern "C" {
#endif

// DISP_SPI_BAUD	24000000
// send data: 320x240x2 = 153600 B = 1 228 800 bits
// transfer time: 51 ms, real time: 70 ms
#define DISP_FRAME_MS (320*240*2*9*1000/DISP_SPI_BAUD)	// transfer time of whole frame in [ms]

// frame buffer in RGB 5-6-5 pixel format
extern ALIGNED u16 FrameBuf[];

extern u8 DispRot;	// current display rotation
extern u16 DispWidth, DispHeight; // current display size

// dirty window to update
extern int DispDirtyX1, DispDirtyX2, DispDirtyY1, DispDirtyY2;

// strip of back buffer
/*
extern u16* pDrawBuf; 		// current draw buffer
extern int DispStripInx;	// current index of back buffer strip
extern int DispMinY;		// minimal Y; base of back buffer strip
extern int DispMaxY;		// maximal Y + 1; end of back buffer strip
*/
#define pDrawBuf FrameBuf	// current draw buffer
#define DispStripInx  0		// current index of back buffer strip
#define DispMinY  0		// minimal Y; base of back buffer strip
#define DispMaxY DispHeight	// maximal Y + 1; end of back buffer strip

// LOW level control: start sending image data to display window (DispSendImg() must follow)
void DispStartImg(u16 x1, u16 x2, u16 y1, u16 y2);

// LOW level control: send one byte of image data to display (follows after DispStartImg())
void DispSendImg(u8 data);

// LOW level control: stop sending image data (follows after DispStartImg() and DispSendImg())
void DispStopImg();

// set dirty all frame buffer
void DispDirtyAll();

// set dirty none (clear after update)
void DispDirtyNone();

// update dirty area by rectangle (check valid range)
void DispDirtyRect(int x, int y, int w, int h);

// update dirty area by pixel (check valid range)
void DispDirtyPoint(int x, int y);

// update - send dirty window to display
void DispUpdate();

// auto update after delta time in [ms] of running program
void DispAutoUpdate(u32 ms);

// refresh update all display
void DispUpdateAll();

// initialize display
//  rot ... rotation mode
//		0 Portrait
//		1 Landscape
//		2 Inverted Portrait
//		3 Inverted Landscape
void DispInit(u8 rot);

// terminate display
void DispTerm();

#ifdef __cplusplus
}
#endif

#endif // _ST7789_H

#endif // USE_ST7789		// use ST7789 TFT display (st7789.c, st7789.h)
