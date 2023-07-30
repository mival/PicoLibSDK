#include "include.h"

// format: 8-bit pixel graphics
// image width: 16 pixels
// image height: 208 lines
// image pitch: 16 bytes
const u8 TilesImg[3328] __attribute__ ((aligned(4))) = {
	0x86, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xE0, 0x86, 
	0x86, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0xF5, 0xF5, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xD0, 0x86, 0x86, 
	0x86, 0x86, 0xF5, 0xF4, 0xF4, 0xF4, 0xD8, 0xD8, 0xD8, 0xD8, 0xF4, 0xF4, 0xF4, 0xF4, 0xD0, 0x86, 
	0x86, 0xF5, 0xF4, 0xF4, 0xF4, 0xFC, 0xFC, 0xFF, 0xFF, 0xFC, 0xFC, 0xF4, 0xF4, 0xF4, 0xD0, 0x86, 
	0x86, 0xF5, 0xF4, 0xF4, 0xF4, 0xFC, 0xF4, 0xF4, 0xF4, 0xF4, 0xFF, 0xF4, 0xF4, 0xF4, 0xD0, 0x86, 
	0x86, 0xF5, 0xF4, 0xF4, 0xF4, 0xFC, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xD0, 0x86, 
	0x86, 0xF5, 0xF4, 0xF4, 0xF4, 0xFC, 0xFC, 0xD8, 0xD8, 0xD8, 0xF4, 0xF4, 0xF4, 0xF4, 0xD0, 0x86, 
	0x86, 0x86, 0xF4, 0xF4, 0xF4, 0xF4, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xF4, 0xF4, 0xF4, 0x8C, 0x86, 
	0x86, 0x86, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xFC, 0xF4, 0xF4, 0xD0, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0xF4, 0xF4, 0xD8, 0xF4, 0xF4, 0xF4, 0xF4, 0xFC, 0xF4, 0xF4, 0x8C, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0xF4, 0xF4, 0xFC, 0xFC, 0xD8, 0xD8, 0xFC, 0xFC, 0xF4, 0xD0, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0xF4, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xF4, 0xF4, 0x8C, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x8C, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0xF4, 0xF4, 0xF4, 0xD0, 0x8C, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0xD0, 0xD0, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0x00, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x86, 0x86, 0x86, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x00, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
	0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 
};
