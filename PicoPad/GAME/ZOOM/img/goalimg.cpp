#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 12 pixels
// image height: 8 lines
// image pitch: 6 bytes
const u16 GoalImg_Pal[4] __attribute__ ((aligned(4))) = {
	0xF81F, 0x07FF, 0xFFFF, 0x0000, 
};

const u8 GoalImg[48] __attribute__ ((aligned(4))) = {
	0x11, 0x11, 0x22, 0x22, 0x11, 0x11, 0x11, 0x12, 0x32, 0x23, 0x21, 0x11, 0x11, 0x20, 0x23, 0x33, 
	0x32, 0x11, 0x12, 0x02, 0x20, 0x20, 0x32, 0x21, 0x20, 0x22, 0x02, 0x22, 0x03, 0x22, 0x11, 0x00, 
	0x03, 0x33, 0x30, 0x11, 0x11, 0x10, 0x33, 0x33, 0x21, 0x11, 0x11, 0x11, 0x02, 0x22, 0x11, 0x11, 
};
