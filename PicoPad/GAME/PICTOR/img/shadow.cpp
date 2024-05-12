#include "../include.h"

// format: 1-bit pixel graphics
// image width: 32 pixels
// image height: 7 lines
// image pitch: 4 bytes
const u8 ShadowImg[28] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 
	0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
