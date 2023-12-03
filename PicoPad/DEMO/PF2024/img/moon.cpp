#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 96 pixels
// image height: 38 lines
// image pitch: 48 bytes
const u16 MoonImg_Pal[13] __attribute__ ((aligned(4))) = {
	0xF811, 0x9111, 0xFABF, 0xA81F, 0x041F, 0x06A0, 0xFFE0, 0xFFEA, 0xD50A, 0xF800, 0xFAAA, 0xFFFF, 0x0000, 
};

const u8 MoonImg[1824] __attribute__ ((aligned(4))) = {
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xCC, 0xC6, 0x66, 0x69, 0x99, 0x99, 0xCC, 0xCC, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 
	0xCC, 0xC6, 0x66, 0x69, 0x99, 0x99, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xC2, 0x66, 0x66, 0x69, 0x99, 0x99, 0x44, 0x44, 0x44, 
	0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xC2, 
	0x66, 0x66, 0x69, 0x99, 0x99, 0x44, 0x44, 0x44, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xC3, 0x36, 0x66, 0x69, 0x99, 0x99, 0x44, 0x44, 0x44, 0x44, 
	0x55, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xC3, 0x36, 
	0x66, 0x69, 0x99, 0x99, 0x44, 0x44, 0x44, 0x44, 0x55, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0xC3, 0x33, 0x66, 0x69, 0x99, 0x99, 0x44, 0x44, 0x45, 0x55, 0x55, 
	0x55, 0x55, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xC3, 0x33, 0x66, 
	0x69, 0x99, 0x99, 0x44, 0x44, 0x45, 0x55, 0x55, 0x55, 0x55, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0xCC, 0x33, 0x36, 0x66, 0x99, 0x99, 0x94, 0x44, 0x45, 0x55, 0x55, 0xCC, 
	0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCC, 0x33, 0x36, 0x66, 
	0x99, 0x99, 0x94, 0x44, 0x45, 0x55, 0x55, 0xCC, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x1C, 0x83, 0x33, 0x66, 0x69, 0x99, 0x94, 0x44, 0x44, 0x55, 0x55, 0xCC, 0xBB, 
	0xBB, 0xBB, 0xBB, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0x83, 0x33, 0x66, 0x69, 
	0x99, 0x94, 0x44, 0x44, 0x55, 0x55, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xCC, 0xC1, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0xC8, 0x33, 0x33, 0x66, 0x99, 0x99, 0x44, 0x44, 0x45, 0x55, 0x5C, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xC8, 0x33, 0x33, 0x66, 0x99, 
	0x99, 0x44, 0x44, 0x45, 0x55, 0x5C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x1C, 0x88, 0x33, 0x36, 0x66, 0x99, 0x99, 0x44, 0x44, 0x55, 0x5C, 0xCB, 0xCC, 0xCC, 
	0xBB, 0xBB, 0xBC, 0xCC, 0xBB, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x1C, 0x88, 0x33, 0x36, 0x66, 0x99, 
	0x99, 0x44, 0x44, 0x55, 0x5C, 0xCB, 0xCC, 0xCC, 0xBB, 0xBB, 0xBC, 0xCC, 0xBB, 0xC1, 0x11, 0x11, 
	0x11, 0x11, 0xC8, 0x83, 0x33, 0x36, 0x69, 0x99, 0x94, 0x44, 0x55, 0x55, 0xCB, 0xBC, 0xBB, 0xBB, 
	0xCB, 0xBB, 0xCB, 0xBB, 0xCB, 0xBC, 0x11, 0x11, 0x11, 0x11, 0xC8, 0x83, 0x33, 0x36, 0x69, 0x99, 
	0x94, 0x44, 0x55, 0x55, 0xCB, 0xBC, 0xBB, 0xBB, 0xCB, 0xBB, 0xCB, 0xBB, 0xCB, 0xBC, 0x11, 0x11, 
	0x11, 0x1C, 0x88, 0x83, 0x33, 0x66, 0x69, 0x99, 0x44, 0x45, 0x55, 0x5C, 0xBB, 0xCB, 0xBB, 0xBB, 
	0xBB, 0xBC, 0xBB, 0xBB, 0xBC, 0xBB, 0xC1, 0x11, 0x11, 0x1C, 0x88, 0x83, 0x33, 0x66, 0x69, 0x99, 
	0x44, 0x45, 0x55, 0x5C, 0xBB, 0xCB, 0xBB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 0xBC, 0xBB, 0xC1, 0x11, 
	0x11, 0x1C, 0x88, 0xCC, 0xCC, 0x66, 0x99, 0x99, 0x44, 0x55, 0x55, 0xCB, 0xBB, 0xBB, 0xCC, 0xCC, 
	0xBB, 0xBB, 0xBC, 0xCC, 0xCB, 0xBB, 0xC1, 0x11, 0x11, 0x1C, 0x88, 0xCC, 0xCC, 0x66, 0x99, 0x99, 
	0x44, 0x55, 0x55, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xC1, 0x11, 
	0x11, 0x1C, 0x0C, 0x11, 0x11, 0xC9, 0x99, 0x94, 0x44, 0x55, 0x5C, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 
	0xCB, 0xBB, 0xCB, 0xBB, 0xBC, 0xBB, 0xBC, 0x11, 0x11, 0x1C, 0x0C, 0x11, 0x11, 0xC9, 0x99, 0x94, 
	0x44, 0x55, 0x5C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x11, 
	0x11, 0xC0, 0x0C, 0x11, 0x11, 0xC9, 0x99, 0x44, 0x45, 0x55, 0xCB, 0xBB, 0xBB, 0xCB, 0xBB, 0xBB, 
	0xBC, 0xBC, 0xBB, 0xBB, 0xBB, 0xCB, 0xBC, 0x11, 0x11, 0xC0, 0x0C, 0x11, 0x11, 0xC9, 0x99, 0x44, 
	0x45, 0x55, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x11, 
	0x11, 0xC0, 0xC1, 0x11, 0x11, 0x1C, 0x99, 0x44, 0x55, 0x5C, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 0xCC, 
	0xCC, 0xBC, 0xBB, 0xBB, 0xCC, 0xCB, 0xBB, 0xC1, 0x11, 0xC0, 0xC1, 0x11, 0x11, 0x1C, 0x99, 0x44, 
	0x55, 0x5C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 0xC1, 
	0x11, 0xC0, 0xC1, 0x11, 0x11, 0x1C, 0x94, 0x44, 0x55, 0xCB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBC, 0xCC, 
	0xCC, 0xBC, 0xBB, 0xBC, 0xCC, 0xCB, 0xBB, 0xC1, 0x11, 0xC0, 0xC1, 0x11, 0x11, 0x1C, 0x94, 0x44, 
	0x55, 0xCB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 0xBB, 0xBC, 0xBC, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 0xC1, 
	0x11, 0xC0, 0xC1, 0x11, 0x11, 0x11, 0xC4, 0x45, 0x55, 0xCB, 0xBB, 0xBB, 0xBC, 0xBB, 0xCC, 0xCC, 
	0xCC, 0xBC, 0xBB, 0xCC, 0xCC, 0xCB, 0xBB, 0xBC, 0x11, 0xC0, 0xC1, 0x11, 0x11, 0x11, 0xC4, 0x45, 
	0x55, 0xCB, 0xBB, 0xBB, 0xBC, 0xCB, 0xBB, 0xBB, 0xCC, 0xBC, 0xCB, 0xBB, 0xBC, 0xCB, 0xBB, 0xBC, 
	0x11, 0xC0, 0xC1, 0x11, 0x11, 0x11, 0xC4, 0x45, 0x5C, 0xBB, 0xBB, 0xBB, 0xBC, 0xBB, 0xCC, 0xCC, 
	0xCC, 0xBC, 0xBB, 0xCC, 0xCC, 0xCB, 0xBB, 0xBC, 0x11, 0xC0, 0xC1, 0x11, 0x11, 0x11, 0xC4, 0x45, 
	0x5C, 0xBB, 0xBB, 0xBB, 0xBC, 0xBC, 0xCC, 0xCC, 0xCC, 0xBC, 0xBC, 0xCC, 0xCC, 0xCB, 0xBB, 0xBC, 
	0x11, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0xC4, 0x55, 0x5C, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xCC, 0xCC, 
	0xCB, 0xCB, 0xCB, 0xCC, 0xCC, 0xBB, 0xBB, 0xBC, 0x11, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0xC4, 0x55, 
	0x5C, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xCC, 0xCC, 0xCB, 0xCB, 0xCB, 0xCC, 0xCC, 0xBB, 0xBB, 0xBC, 
	0x11, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x55, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCC, 0xCC, 
	0xBB, 0xCB, 0xBC, 0xCC, 0xCB, 0xBB, 0xBB, 0xBC, 0x11, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x55, 
	0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCC, 0xCC, 0xBB, 0xCB, 0xBC, 0xCC, 0xCB, 0xBB, 0xBB, 0xBC, 
	0x11, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x55, 0xCB, 0xBB, 0xBA, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBC, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x11, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x55, 
	0xCB, 0xBB, 0xBA, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 
	0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x5C, 0xBB, 0xBB, 0xBA, 0xBA, 0xAB, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xBC, 0xCB, 0xBB, 0xBB, 0xBB, 0xBC, 0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x5C, 
	0xBB, 0xBB, 0xBA, 0xBA, 0xAB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCB, 0xBB, 0xBB, 0xBB, 0xBC, 
	0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x5C, 0xBB, 0xB7, 0x7B, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 0xBB, 0xBC, 0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x1C, 0x5C, 
	0xBB, 0xB7, 0x7B, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 0xBB, 0xBC, 
	0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0xCB, 0xBB, 0xBA, 0xBB, 0xAB, 0x7B, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 0xBB, 0xBC, 0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0xCB, 
	0xBB, 0xBA, 0xBB, 0xAB, 0x7B, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 0xBB, 0xBC, 
	0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0xCB, 0xBB, 0x7A, 0xBB, 0xBB, 0x7A, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xAB, 0xAB, 0xBC, 0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0xCB, 
	0xBB, 0x7A, 0xBB, 0xBB, 0x7A, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xAB, 0xAB, 0xBC, 
	0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0xCB, 0xBB, 0xAB, 0xBB, 0xBB, 0xBB, 0xBC, 0xBB, 0xCB, 
	0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xAB, 0xBB, 0xC1, 0x1C, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0xCB, 
	0xBB, 0xAB, 0xBB, 0xBB, 0xBB, 0xBC, 0xBB, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xAB, 0xBB, 0xC1, 
	0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0xCB, 0xBB, 0x7B, 0xBB, 0xBA, 0xAC, 0xCB, 0xBB, 0xCB, 
	0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 0xBB, 0xC1, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0xCB, 
	0xBB, 0x7B, 0xBB, 0xBA, 0xAC, 0xCB, 0xBB, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 0xBB, 0xC1, 
	0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xCB, 0xBB, 0xBC, 
	0xBB, 0xBB, 0xBB, 0xBC, 0xCA, 0xAB, 0xBC, 0x11, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x1C, 
	0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xCB, 0xBB, 0xBC, 0xBB, 0xBB, 0xBB, 0xBC, 0xCA, 0xAB, 0xBC, 0x11, 
	0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xBB, 0xBB, 0xAB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 
	0xCC, 0xCC, 0xCC, 0xCC, 0xBB, 0xBB, 0xBC, 0x11, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x1C, 
	0xBB, 0xBB, 0xAB, 0xBB, 0xBB, 0xBC, 0xBB, 0xBB, 0xCC, 0xCC, 0xCC, 0xCC, 0xBB, 0xBB, 0xBC, 0x11, 
	0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 
	0xBB, 0xBB, 0xBC, 0xCC, 0xBB, 0xBB, 0xC1, 0x11, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCC, 0xBB, 0xBB, 0xC1, 0x11, 
	0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCC, 0xCC, 
	0xCC, 0xCC, 0xCC, 0xCB, 0xBB, 0xBB, 0xC1, 0x11, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCB, 0xBB, 0xBB, 0xC1, 0x11, 
	0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCC, 
	0xCC, 0xCC, 0xCC, 0xCB, 0xBB, 0xBC, 0x11, 0x11, 0xCC, 0xCC, 0xCC, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x1C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCB, 0xBB, 0xBC, 0x11, 0x11, 
	0xC1, 0xCC, 0x1C, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCC, 
	0xCC, 0xCC, 0xCC, 0xBB, 0xBB, 0xC1, 0x11, 0x11, 0xC1, 0xCC, 0x1C, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCC, 0xCC, 0xCC, 0xCC, 0xBB, 0xBB, 0xC1, 0x11, 0x11, 
	0x11, 0x1C, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 
	0xCC, 0xCC, 0xCB, 0xBB, 0xBC, 0x11, 0x11, 0x11, 0x11, 0x1C, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x1C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCC, 0xCC, 0xCB, 0xBB, 0xBC, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xBB, 0xBC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xC1, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0xBC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xC1, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCC, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xCC, 0xCC, 0xCC, 
	0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0xCC, 0xCC, 0xCC, 0xCC, 0xC1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
};
