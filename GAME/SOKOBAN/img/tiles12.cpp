#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 276 pixels
// image height: 12 lines
// image pitch: 138 bytes
const u16 Tiles12Img_Pal[16] __attribute__ ((aligned(4))) = {
	0x500A, 0x001F, 0x7538, 0x03A0, 0x53AA, 0xFFE0, 0x73AA, 0xA3A0, 0xFBA0, 0xF800, 0xA000, 0x6800, 0xFFFF, 0xC618, 0x52AA, 0x0000, 
};

const u8 Tiles12Img[1656] __attribute__ ((aligned(4))) = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x22, 0x2E, 0x22, 0x2E, 
	0x22, 0x2E, 0x22, 0x2E, 0x22, 0x2E, 0x22, 0x2E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xCC, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0x0C, 0xC0, 0x00, 0x00, 
	0x00, 0xCC, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0x0C, 0xC0, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xC0, 
	0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xC0, 0x00, 0x00, 0x0C, 0xCD, 0x0C, 0xC0, 0x00, 0x00, 0x0C, 0xCD, 
	0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x00, 
	0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0xCC, 0xC0, 
	0xCC, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0xCC, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0xCC, 0x00, 0x00, 0x00, 
	0xCC, 0xC0, 0xCC, 0x00, 0x00, 0x00, 0xCC, 0xC0, 0xCC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x79, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 
	0x24, 0x4E, 0xF5, 0x55, 0x55, 0x55, 0x55, 0x5F, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x8F, 0x00, 0x0C, 
	0xDC, 0xC0, 0x00, 0x00, 0x00, 0x0C, 0xDC, 0xC0, 0x00, 0x00, 0x00, 0x0C, 0xDC, 0xC0, 0x00, 0x00, 
	0x00, 0x0C, 0xDC, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0x0C, 0xC0, 
	0x00, 0x00, 0x00, 0xCC, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 
	0xCC, 0xDC, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0xDC, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0xDC, 0xC0, 0x00, 
	0x00, 0x00, 0xCC, 0xDC, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0xDC, 0xCC, 0x00, 0x00, 0x00, 0xCC, 0xDC, 
	0xCC, 0x00, 0x00, 0x00, 0xCC, 0xDC, 0xCC, 0x00, 0x00, 0x00, 0xCC, 0xDC, 0xCC, 0x00, 0x00, 0x00, 
	0xCC, 0xDC, 0xCC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x79, 0xAA, 0xAA, 0xAA, 0xAA, 0xAB, 
	0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0xBB, 0xBE, 0x24, 0x4E, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0x5F, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x0C, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x0C, 
	0xCC, 0xCC, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x00, 0x00, 
	0x00, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 
	0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 
	0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0xCC, 0xCC, 
	0xCD, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCD, 0x00, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x79, 0xAA, 0xAA, 0xAA, 0xAA, 0xAB, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEB, 0xAA, 0xAA, 0xEE, 0xEE, 0xF5, 0xF5, 0xF3, 0x3F, 0x5F, 0x5F, 0xF8, 0xF8, 0xF9, 0x9F, 
	0x8F, 0x8F, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 
	0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 
	0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 
	0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 
	0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 
	0xC0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x79, 0xAA, 
	0xAA, 0xAA, 0xAA, 0xAB, 0x22, 0x2E, 0x22, 0x2E, 0x22, 0x2E, 0x22, 0xBA, 0xAA, 0xAA, 0x92, 0x2E, 
	0xF5, 0xFF, 0x5F, 0xF5, 0xFF, 0x5F, 0xF8, 0xFF, 0x8F, 0xF8, 0xFF, 0x8F, 0x00, 0xCC, 0xCC, 0xC1, 
	0xCC, 0x00, 0x00, 0xCC, 0xCC, 0xC1, 0xCC, 0x00, 0x00, 0xCC, 0xCC, 0xC1, 0xCC, 0x00, 0x00, 0xCC, 
	0xCC, 0xC1, 0xCC, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 
	0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0x1C, 0xCC, 
	0xCD, 0x00, 0x00, 0xCC, 0x1C, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0x1C, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 
	0x1C, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0x1C, 0xC1, 0xCD, 0x00, 0x00, 0xCC, 0x1C, 0xC1, 0xCD, 0x00, 
	0x00, 0xCC, 0x1C, 0xC1, 0xCD, 0x00, 0x00, 0xCC, 0x1C, 0xC1, 0xCD, 0x00, 0x00, 0xCC, 0x1C, 0xC1, 
	0xCD, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7A, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0x24, 0x4E, 
	0x24, 0x4E, 0x24, 0x4E, 0x24, 0xBA, 0xAA, 0xAA, 0x94, 0x4E, 0xF5, 0xF3, 0xF5, 0x5F, 0x3F, 0x5F, 
	0xF8, 0xF9, 0xF8, 0x8F, 0x9F, 0x8F, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 
	0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 
	0xCC, 0xCC, 0xDD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xDD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xDD, 0x00, 
	0x00, 0xCC, 0xCC, 0xCC, 0xDD, 0x00, 0x00, 0xDC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xDC, 0xCC, 0xCC, 
	0xCD, 0x00, 0x00, 0xDC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xDC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 
	0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 
	0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0xBA, 
	0xAA, 0xAA, 0x94, 0x4E, 0xF5, 0xF3, 0xF5, 0x5F, 0x3F, 0x5F, 0xF8, 0xF9, 0xF8, 0x8F, 0x9F, 0x8F, 
	0x00, 0x0C, 0xCC, 0xCC, 0x90, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x90, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 
	0x90, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0x90, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 
	0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xCC, 0xD0, 0x00, 
	0x00, 0x09, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x09, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x09, 0xCC, 0xCC, 
	0xD0, 0x00, 0x00, 0x09, 0xCC, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xC9, 0x9C, 0xD0, 0x00, 0x00, 0x0C, 
	0xC9, 0x9C, 0xD0, 0x00, 0x00, 0x0C, 0xC9, 0x9C, 0xD0, 0x00, 0x00, 0x0C, 0xC9, 0x9C, 0xD0, 0x00, 
	0x00, 0x0C, 0xC9, 0x9C, 0xD0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x9A, 0x79, 
	0x99, 0x99, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEA, 0xAA, 0xA9, 0xEE, 0xEE, 0xF5, 0xFF, 
	0x5F, 0xF5, 0xFF, 0x5F, 0xF8, 0xFF, 0x8F, 0xF8, 0xFF, 0x8F, 0x00, 0x01, 0xCC, 0x15, 0x00, 0x00, 
	0x00, 0x01, 0xCC, 0x15, 0x00, 0x00, 0x00, 0x01, 0xCC, 0x15, 0x00, 0x00, 0x00, 0x01, 0xCC, 0x15, 
	0x00, 0x00, 0x00, 0xCC, 0x11, 0x11, 0xCC, 0x00, 0x00, 0xCC, 0x11, 0x11, 0xCC, 0x00, 0x00, 0xCC, 
	0x11, 0x11, 0xCC, 0x00, 0x00, 0xCC, 0x11, 0x11, 0xCC, 0x00, 0x00, 0x00, 0x51, 0xC1, 0x10, 0x00, 
	0x00, 0x00, 0x51, 0xC1, 0x10, 0x00, 0x00, 0x00, 0x51, 0xC1, 0x10, 0x00, 0x00, 0x00, 0x51, 0xC1, 
	0x10, 0x00, 0x00, 0xCC, 0x15, 0x11, 0xCC, 0x00, 0x00, 0xCC, 0x15, 0x11, 0xCC, 0x00, 0x00, 0xCC, 
	0x15, 0x11, 0xCC, 0x00, 0x00, 0xCC, 0x15, 0x11, 0xCD, 0x00, 0x0C, 0xCC, 0x15, 0x11, 0xCC, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA, 0xAB, 0x79, 0xAA, 0xAA, 0x22, 0x2E, 0x22, 0x2E, 
	0x22, 0x2E, 0x22, 0x2E, 0x99, 0x9E, 0x22, 0x2E, 0xF5, 0xF5, 0xF3, 0x3F, 0x5F, 0x5F, 0xF8, 0xF8, 
	0xF9, 0x9F, 0x8F, 0x8F, 0x00, 0x01, 0xCC, 0x11, 0x10, 0x00, 0x00, 0x01, 0xCD, 0x11, 0x10, 0x00, 
	0x00, 0x01, 0xCC, 0x11, 0x10, 0x00, 0x00, 0x01, 0xDC, 0xD1, 0x10, 0x00, 0x0C, 0xCD, 0x11, 0x11, 
	0x1C, 0xC0, 0x0D, 0xDD, 0x11, 0x11, 0x1C, 0x00, 0x0C, 0xCD, 0x11, 0x11, 0x1C, 0xC0, 0x0C, 0xCD, 
	0x11, 0x11, 0x1D, 0x00, 0x00, 0x01, 0x11, 0xC1, 0x10, 0x00, 0x00, 0x01, 0x1D, 0xC1, 0x10, 0x00, 
	0x00, 0x01, 0x11, 0xC1, 0x10, 0x00, 0x00, 0x01, 0x11, 0xDD, 0x10, 0x00, 0x0C, 0xCD, 0x11, 0x11, 
	0xDC, 0x00, 0x0D, 0xDD, 0x11, 0x11, 0xCC, 0x00, 0x0C, 0xCD, 0x11, 0x11, 0xDC, 0x00, 0x0C, 0xCD, 
	0x11, 0x11, 0xDD, 0x00, 0x00, 0xDD, 0x11, 0x11, 0xD0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xAA, 0xAA, 0xAB, 0x79, 0xAA, 0xAA, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 
	0x24, 0x4E, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xDC, 
	0xDD, 0x15, 0x10, 0x00, 0x00, 0xDC, 0xD1, 0x15, 0x10, 0x00, 0x00, 0xDC, 0xDD, 0x15, 0x10, 0x00, 
	0x00, 0xDC, 0x1D, 0x15, 0x10, 0x00, 0x0D, 0x01, 0xCC, 0x11, 0x10, 0xD0, 0x00, 0x01, 0xCC, 0x11, 
	0x10, 0x00, 0x0D, 0x01, 0xCC, 0x11, 0x10, 0xD0, 0x00, 0x01, 0xCC, 0x11, 0x10, 0x00, 0x00, 0x01, 
	0x51, 0xD1, 0xCD, 0x00, 0x00, 0x01, 0x51, 0xD1, 0xCD, 0x00, 0x00, 0x01, 0x51, 0xD1, 0xCD, 0x00, 
	0x00, 0x01, 0x51, 0x11, 0xCD, 0x00, 0x0D, 0x01, 0x15, 0x11, 0x1C, 0x00, 0x00, 0x01, 0x15, 0x11, 
	0x1C, 0x00, 0x0D, 0x01, 0x15, 0x11, 0x1C, 0x00, 0x00, 0x01, 0x15, 0x11, 0x1C, 0x00, 0x00, 0x01, 
	0x15, 0x11, 0x1C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA, 0xAB, 0x79, 0xAA, 0xAA, 
	0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0x24, 0x4E, 0xF5, 0x55, 0x55, 0x55, 
	0x55, 0x5F, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x8F, 0x00, 0x00, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 
	0x6D, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xC6, 0xC0, 0x00, 
	0x00, 0x0C, 0xC0, 0xDC, 0xD0, 0x00, 0x00, 0x0C, 0xC0, 0x06, 0xD0, 0x00, 0x00, 0x0C, 0xC0, 0xDC, 
	0xD0, 0x00, 0x00, 0x0D, 0x60, 0xCC, 0xD0, 0x00, 0x00, 0x0C, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x0C, 
	0x6C, 0xCC, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xC0, 0x00, 0x00, 0x00, 0x0C, 0xCC, 0xDC, 0x00, 0x00, 
	0x00, 0x0C, 0xC0, 0xCC, 0xD0, 0x00, 0x00, 0x0D, 0xD0, 0x66, 0xD0, 0x00, 0x00, 0x0C, 0xC0, 0xCC, 
	0xD0, 0x00, 0x00, 0x06, 0x60, 0x0D, 0xD0, 0x00, 0x00, 0x0C, 0xC0, 0xCC, 0xD0, 0x00, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xBB, 0xBB, 0xBB, 0x7A, 0xBB, 0xBB, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x00, 0x00, 0xDD, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 
	0xDD, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0x0D, 0xD0, 0x0D, 0xD0, 0x00, 
	0x00, 0x0D, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0D, 0xD0, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 
	0x00, 0x00, 0x00, 0x0D, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x0D, 
	0xDD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x0D, 0xD0, 0x00, 0x00, 0x00, 0x0D, 0xD0, 0x0D, 0xD0, 0x00, 
	0x00, 0x00, 0x00, 0x0D, 0xD0, 0x00, 0x00, 0x0D, 0xD0, 0x0D, 0xD0, 0x00, 0x00, 0x0D, 0xD0, 0x00, 
	0x00, 0x00, 0x00, 0x0D, 0xD0, 0x0D, 0xD0, 0x00, 
};
