#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 368 pixels
// image height: 16 lines
// image pitch: 184 bytes
const u16 Tiles16Img_Pal[16] __attribute__ ((aligned(4))) = {
	0x500A, 0x001F, 0x000A, 0x7538, 0x03A0, 0x5BAA, 0xFFE0, 0xA3A0, 0xFBA0, 0xF800, 0xA000, 0x7000, 0xFFFF, 0xC618, 0x52AA, 0x0000, 
};

const u8 Tiles16Img[2944] __attribute__ ((aligned(4))) = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 
	0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x00, 0x0C, 0xCD, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xC0, 0x00, 0x00, 0x00, 
	0x00, 0x0C, 0xCD, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xC0, 0x00, 0x00, 0x00, 
	0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0C, 0xC0, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xC0, 0xCC, 0xC0, 0x00, 
	0x00, 0x00, 0x00, 0x0C, 0xC0, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xC0, 0xCC, 0xC0, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xC0, 0x0C, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0x0C, 0xCC, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xC0, 0x0C, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0x0C, 0xCC, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xC0, 0x0C, 0xCC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x79, 0x99, 0x99, 0x9A, 0x79, 0x99, 0x99, 0x9A, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 
	0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0xF6, 0x6F, 0x66, 0x66, 0x66, 0x66, 0xF6, 0x6F, 
	0xF8, 0x8F, 0x88, 0x88, 0x88, 0x88, 0xF8, 0x8F, 0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0xCC, 0xC0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0xCC, 0xC0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0xCC, 0xD0, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xC0, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0xCC, 0xD0, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xC0, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD0, 0x0C, 0xCD, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x79, 0xAA, 0xAA, 0xAB, 0x79, 0xAA, 0xAA, 0xAB, 
	0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 
	0xF6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x6F, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8F, 
	0x00, 0x00, 0xCC, 0xDC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xDC, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xDC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xDC, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xCD, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xDD, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xDD, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xDD, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xDD, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xD0, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD0, 0xCC, 0xC0, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xD0, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD0, 0xCC, 0xC0, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xD0, 0xCC, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x7A, 0xBB, 0xBB, 0xBB, 0x7A, 0xBB, 0xBB, 0xBB, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xBB, 0xBE, 0xEE, 0xEE, 0xEE, 0xFF, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xFF, 
	0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x0C, 0xCD, 0xCC, 0xCD, 0xC0, 0x00, 0x00, 
	0x00, 0x0C, 0xCD, 0xCC, 0xCD, 0xC0, 0x00, 0x00, 0x00, 0x0C, 0xCD, 0xCC, 0xCD, 0xC0, 0x00, 0x00, 
	0x00, 0x0C, 0xCD, 0xCC, 0xCD, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 
	0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0xBB, 0xAA, 0xAA, 0xAE, 0x33, 0x3E, 
	0xF6, 0x6F, 0x66, 0xF4, 0x4F, 0x66, 0xF6, 0x6F, 0xF8, 0x8F, 0x88, 0xF9, 0x9F, 0x88, 0xF8, 0x8F, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x99, 0x9A, 0x79, 0x99, 0x99, 0x9A, 0x79, 0x99, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 
	0x35, 0x5E, 0xBA, 0xAA, 0xAA, 0xAE, 0x35, 0x5E, 0xF6, 0x6F, 0x66, 0x6F, 0xF6, 0x66, 0xF6, 0x6F, 
	0xF8, 0x8F, 0x88, 0x8F, 0xF8, 0x88, 0xF8, 0x8F, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAB, 0x79, 0xAA, 0xAA, 0xAB, 0x79, 0xAA, 
	0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5B, 0xAA, 0xAA, 0xAA, 0xA9, 0x35, 0x5E, 
	0xF6, 0x6F, 0xF6, 0x66, 0xF6, 0x6F, 0xF6, 0x6F, 0xF8, 0x8F, 0xF8, 0x88, 0xF8, 0x8F, 0xF8, 0x8F, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0x1C, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0x1C, 0xC0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0x1C, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0x1C, 0xC0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xC1, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xC1, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xC1, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xC1, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0x1C, 0xC1, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0x1C, 0xC1, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0x1C, 0xC1, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0x1C, 0xC1, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0x1C, 0xC1, 0xCC, 0xD0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xBB, 0xBB, 0x7A, 0xBB, 0xBB, 0xBB, 0x7B, 0xBB, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEB, 0xAA, 0xAA, 0xAA, 0xA9, 0xEE, 0xEE, 0xF6, 0x6F, 0x4F, 0x66, 0x6F, 0xF4, 0xF6, 0x6F, 
	0xF8, 0x8F, 0x9F, 0x88, 0x8F, 0xF9, 0xF8, 0x8F, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCD, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCD, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0D, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xD0, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 
	0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3B, 0xAA, 0xAA, 0xAA, 0xA9, 0x33, 0x3E, 
	0xF6, 0x6F, 0x4F, 0xF6, 0x66, 0xF4, 0xF6, 0x6F, 0xF8, 0x8F, 0x9F, 0xF8, 0x88, 0xF9, 0xF8, 0x8F, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC9, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC9, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC9, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xC9, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0x9C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x9C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0x9C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x9C, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC9, 0x9C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC9, 0x9C, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC9, 0x9C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC9, 0x9C, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC9, 0x9C, 0xCD, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x79, 0x99, 0x99, 0x9A, 0x79, 0x99, 0x99, 0x9A, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 
	0x35, 0x5E, 0xAA, 0xAA, 0xAA, 0x9E, 0x35, 0x5E, 0xF6, 0x6F, 0xF6, 0x6F, 0x66, 0x6F, 0xF6, 0x6F, 
	0xF8, 0x8F, 0xF8, 0x8F, 0x88, 0x8F, 0xF8, 0x8F, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xCC, 0xCC, 0xD0, 0xCC, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x79, 0xAA, 0xAA, 0xAB, 0x79, 0xAA, 0xAA, 0xAB, 
	0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0xAA, 0xAA, 0xA9, 0x9E, 0x35, 0x5E, 
	0xF6, 0x6F, 0x66, 0x6F, 0xF6, 0x66, 0xF6, 0x6F, 0xF8, 0x8F, 0x88, 0x8F, 0xF8, 0x88, 0xF8, 0x8F, 
	0x00, 0x00, 0x11, 0xCC, 0x11, 0x60, 0x00, 0x00, 0x00, 0x00, 0x11, 0xCC, 0x11, 0x60, 0x00, 0x00, 
	0x00, 0x00, 0x11, 0xCC, 0x11, 0x60, 0x00, 0x00, 0x00, 0x00, 0x11, 0xCC, 0x11, 0x60, 0x00, 0x00, 
	0x00, 0x0C, 0xC1, 0x11, 0x11, 0x1C, 0xCC, 0x00, 0x00, 0x0C, 0xC1, 0x11, 0x11, 0x1C, 0xCC, 0x00, 
	0x00, 0x0C, 0xC1, 0x11, 0x11, 0x1C, 0xCC, 0x00, 0x00, 0x0C, 0xC1, 0x11, 0x11, 0x1C, 0xCD, 0x00, 
	0x00, 0x00, 0x06, 0x11, 0xCC, 0x11, 0x00, 0x00, 0x00, 0x00, 0x06, 0x11, 0xCC, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x11, 0xCC, 0x11, 0x00, 0x00, 0x00, 0x00, 0x06, 0x11, 0xCC, 0x11, 0x00, 0x00, 
	0x00, 0x0C, 0xC1, 0x16, 0x11, 0x1C, 0xC0, 0x00, 0x00, 0x0C, 0xC1, 0x16, 0x11, 0x1C, 0xC0, 0x00, 
	0x00, 0x0C, 0xC1, 0x16, 0x11, 0x1C, 0xC0, 0x00, 0x00, 0x0C, 0xC1, 0x16, 0x11, 0x1C, 0xD0, 0x00, 
	0x0D, 0xCC, 0xC1, 0x16, 0x11, 0x1C, 0xCC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x7A, 0xBB, 0xBB, 0xBB, 0x7A, 0xBB, 0xBB, 0xBB, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0x99, 0x9E, 0xEE, 0xEE, 0xEE, 0xF6, 0x6F, 0x66, 0xF4, 0x4F, 0x66, 0xF6, 0x6F, 
	0xF8, 0x8F, 0x88, 0xF9, 0x9F, 0x88, 0xF8, 0x8F, 0x00, 0x00, 0x11, 0xCC, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x1D, 0xCD, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x11, 0xCC, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x11, 0xDC, 0xD1, 0x11, 0x00, 0x00, 0x00, 0xCC, 0xD1, 0x11, 0x11, 0x11, 0xCC, 0xC0, 
	0x00, 0xDD, 0xD1, 0x11, 0x11, 0x11, 0xCC, 0x00, 0x00, 0xCC, 0xD1, 0x11, 0x11, 0x11, 0xCC, 0xC0, 
	0x00, 0xCC, 0xD1, 0x11, 0x11, 0x11, 0xDD, 0x00, 0x00, 0x00, 0x11, 0x11, 0xCC, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x11, 0x1D, 0xCD, 0x11, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0xCC, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x11, 0x11, 0xDC, 0xD1, 0x00, 0x00, 0x00, 0xCC, 0xD1, 0x11, 0x11, 0x1D, 0xCC, 0x00, 
	0x00, 0xDD, 0xD1, 0x11, 0x11, 0x1C, 0xCD, 0x00, 0x00, 0xCC, 0xD1, 0x11, 0x11, 0x1D, 0xCC, 0x00, 
	0x00, 0xCC, 0xD1, 0x11, 0x11, 0x1D, 0xDD, 0x00, 0x00, 0x0D, 0xD1, 0x11, 0x11, 0x1D, 0x00, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 
	0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 0x33, 0x3E, 
	0xFF, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 
	0x00, 0x0D, 0xC1, 0xDD, 0x11, 0x61, 0x00, 0x00, 0x00, 0x0D, 0xC1, 0xD1, 0x11, 0x61, 0x00, 0x00, 
	0x00, 0x0D, 0xC1, 0xDD, 0x11, 0x61, 0x00, 0x00, 0x00, 0x0D, 0xC1, 0x1D, 0x11, 0x61, 0x00, 0x00, 
	0x00, 0xD0, 0x11, 0xCC, 0x11, 0x11, 0x0D, 0xD0, 0x00, 0x00, 0x11, 0xCC, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0xD0, 0x11, 0xCC, 0x11, 0x11, 0x0D, 0xD0, 0x00, 0x00, 0x11, 0xCC, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x16, 0x11, 0xDD, 0x1C, 0xD0, 0x00, 0x00, 0x00, 0x16, 0x11, 0xD1, 0x1C, 0xD0, 0x00, 
	0x00, 0x00, 0x16, 0x11, 0xDD, 0x1C, 0xD0, 0x00, 0x00, 0x00, 0x16, 0x11, 0x1D, 0x1C, 0xD0, 0x00, 
	0x00, 0xD0, 0x11, 0x16, 0x11, 0x11, 0xCD, 0x00, 0x00, 0x00, 0x11, 0x16, 0x11, 0x11, 0xC0, 0x00, 
	0x00, 0xD0, 0x11, 0x16, 0x11, 0x11, 0xCD, 0x00, 0x00, 0x00, 0x11, 0x16, 0x11, 0x11, 0xC0, 0x00, 
	0x00, 0x00, 0x11, 0x16, 0x11, 0x11, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x99, 0x9A, 0x79, 0x99, 0x99, 0x9A, 0x79, 0x99, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 
	0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0xF6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x6F, 
	0xF8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8F, 0x00, 0x00, 0xD2, 0x22, 0x22, 0x22, 0x00, 0x00, 
	0x00, 0x00, 0xD2, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0xD2, 0x22, 0x22, 0x22, 0x00, 0x00, 
	0x00, 0x00, 0xD2, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x22, 0xDD, 0x22, 0x22, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0xDD, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x22, 0xDD, 0x22, 0x22, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0xDD, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x2D, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0x22, 0x22, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x2D, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0x22, 0x22, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0xD0, 0x00, 
	0x00, 0x00, 0xCC, 0xC2, 0x22, 0x22, 0xD0, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0xD0, 0x00, 
	0x00, 0x00, 0x22, 0x22, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0xD0, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAB, 0x79, 0xAA, 0xAA, 0xAB, 0x79, 0xAA, 
	0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 0x35, 0x5E, 
	0xF6, 0x6F, 0x66, 0x66, 0x66, 0x66, 0xF6, 0x6F, 0xF8, 0x8F, 0x88, 0x88, 0x88, 0x88, 0xF8, 0x8F, 
	0x00, 0x00, 0x0C, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x5D, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xC5, 0x5C, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC0, 0xDC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0x05, 0x50, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC0, 0xDC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xD5, 0x50, 0xCC, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC5, 0x5C, 0xCC, 0xC0, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xD5, 0xC0, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC0, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xD0, 0x55, 0x5D, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC0, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x55, 0x50, 0x0D, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xC0, 0xCC, 0xCD, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xBB, 0xBB, 0x7A, 0xBB, 0xBB, 0xBB, 0x7A, 0xBB, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xDD, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xD0, 0x0D, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xD0, 0x0D, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0D, 0xD0, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0C, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0D, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xD0, 0x0D, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0D, 0xD0, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xD0, 0x0D, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0xD0, 0x0D, 0xD0, 0x00, 0x00, 
};
