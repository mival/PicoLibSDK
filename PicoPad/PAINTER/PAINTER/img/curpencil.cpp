#include "../include.h"

// format: 16-bit pixel graphics
// image width: 32 pixels
// image height: 32 lines
// image pitch: 64 bytes
const u16 CurPencilImg[1024] __attribute__ ((aligned(4))) = {
	0x07E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0x0000, 0x0000, 0xFEF3, 0xFEF3, 0xFEF3, 0x0000, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0x0000, 0xFEF3, 0xFEF3, 0xFEF3, 0x0000, 0x0000, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0x0000, 0xFEF3, 0xFEF3, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0x0000, 0xFEF3, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0x0000, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 
	0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 
	0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 
	0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 
	0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 
	0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 
	0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 
	0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 
	0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 0x07E0, 
	0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x07E0, 
	0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 
	0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x8410, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 
	0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x8410, 0x8410, 0x8410, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x8410, 0x8410, 0x8410, 0x8410, 0x8410, 0x0000, 0x0000, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0x0000, 0x0000, 0x07E0, 0x0000, 0x8410, 0x8410, 0x8410, 0x8410, 0x8410, 0x0000, 0x0000, 0x0000, 0x0000, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0x0000, 0x0000, 0x8410, 0x8410, 0x8410, 0x8410, 0x8410, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x8410, 0x8410, 0x8410, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFBB0, 0xFBB0, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x8410, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0x0000, 0x0000, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x0000, 0x0000, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 
	0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xFBB0, 0xFBB0, 0xFBB0, 0xFBB0, 0xF81F, 0xF81F, 
};
