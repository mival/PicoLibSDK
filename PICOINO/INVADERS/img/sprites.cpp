#include "include.h"

// format: 8-bit pixel graphics
// image width: 36 pixels
// image height: 56 lines
// image pitch: 36 bytes
const u8 SpritesImg[2016] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 
	0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 
	0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 
	0x00, 0x1C, 0x1C, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x1C, 0x1C, 0x00, 
	0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 
	0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1C, 0x00, 0x1C, 0x1C, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 
	0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x1C, 0x1C, 0x00, 
	0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 
	0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 
	0x1C, 0x00, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 
	0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 
	0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 
	0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 
	0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 
	0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x00, 
	0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 
	0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 
	0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 
	0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
	0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x00, 
	0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 
	0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 
	0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xE3, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xE3, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0x00, 0x00, 0xE3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0x00, 
	0x00, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0x00, 0x00, 
	0x00, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0xE3, 0x00, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 
	0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 
	0x00, 0x00, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0xE3, 0x00, 
	0x00, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0x00, 
	0x00, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0xE3, 0x00, 0x00, 0x00, 0x00, 0xE3, 0x00, 0x00, 0x00, 
	0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 
	0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 
	0x00, 0x00, 0x00, 0x00, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0xE3, 0xE3, 0x00, 
	0xE3, 0xE3, 0x00, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0x00, 
	0x00, 0x00, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0xE3, 0xE3, 0x00, 0x00, 0x00, 0x00, 
	0xE3, 0xE3, 0x00, 0x00, 0x00, 0xE3, 0x00, 0x00, 0xE3, 0x00, 0x00, 0xE3, 0x00, 0x00, 0xE3, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFC, 0x00, 0x00, 
	0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 
	0x00, 0x00, 0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xFF, 0xFF, 0x00, 
	0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 
	0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFC, 
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
	0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 
	0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 
	0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 
	0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 
	0xFC, 0xFC, 0xFC, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xFC, 0xFC, 0x00, 
	0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 0xFC, 0x00, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 
	0x00, 0xFC, 0xFC, 0xFC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xFC, 0xFC, 0x00, 
	0xFC, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xFC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xEC, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 
	0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0xFC, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 
	0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 
	0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 
	0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 
	0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
	0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0x00, 
	0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 
	0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 
	0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 
	0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 
	0xE0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 
	0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 
	0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
