#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 10 pixels
// image height: 10 lines
// image pitch: 5 bytes
const u16 ColSelImg_Pal[3] __attribute__ ((aligned(4))) = {
	0xF81F, 0xFFFF, 0x0000, 
};

const u8 ColSelImg[50] __attribute__ ((aligned(4))) = {
	0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x01, 0x10, 
	0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 
	0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 
	0x11, 0x11, 
};
