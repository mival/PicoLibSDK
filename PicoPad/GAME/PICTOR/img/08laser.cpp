#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 8 pixels
// image height: 8 lines
// image pitch: 4 bytes
const u16 LaserImg_Pal[5] __attribute__ ((aligned(4))) = {
	0xF81F, 0xFE80, 0xFBE0, 0xF8E0, 0x0000, 
};

const u8 LaserImg[32] __attribute__ ((aligned(4))) = {
	0x00, 0x03, 0x30, 0x00, 0x00, 0x32, 0x23, 0x00, 0x03, 0x21, 0x12, 0x30, 0x32, 0x11, 0x11, 0x23, 
	0x32, 0x11, 0x11, 0x23, 0x03, 0x21, 0x12, 0x30, 0x00, 0x32, 0x23, 0x00, 0x00, 0x03, 0x30, 0x00, 
};
