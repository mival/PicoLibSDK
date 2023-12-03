#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 96 pixels
// image height: 48 lines
// image pitch: 48 bytes
const u16 FrameImg_Pal[16] __attribute__ ((aligned(4))) = {
	0x9111, 0x0008, 0x0005, 0x0002, 0x20C0, 0x1080, 0x9B60, 0x82E0, 0x7AA0, 0x6240, 0x51E0, 0x4160, 0x3120, 0x28E0, 0x28E0, 0x0000, 
};

const u8 FrameImg[2304] __attribute__ ((aligned(4))) = {
	0x00, 0x13, 0xFF, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0xFF, 0x31, 0x00, 
	0x01, 0xFA, 0x66, 0x94, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0xD9, 0x66, 0xAF, 0x10, 
	0x1F, 0x87, 0xBB, 0x97, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x79, 0xBB, 0x79, 0xF1, 
	0x3A, 0x74, 0x77, 0xB9, 0x76, 0x88, 0x66, 0x66, 0x66, 0xA8, 0x66, 0x86, 0x66, 0x66, 0xA6, 0x66, 
	0x66, 0x68, 0xA6, 0x66, 0x86, 0x66, 0x68, 0x86, 0x68, 0x86, 0x66, 0x68, 0x66, 0x6A, 0x86, 0x66, 
	0x66, 0x6A, 0x66, 0x66, 0x68, 0x66, 0x8A, 0x66, 0x66, 0x66, 0x88, 0x67, 0x9B, 0x77, 0x47, 0xB3, 
	0xF6, 0xB7, 0xB9, 0x99, 0x97, 0xB9, 0x9B, 0xB9, 0x77, 0xBB, 0x77, 0xBB, 0x77, 0x77, 0xBB, 0x74, 
	0xB7, 0x79, 0x9B, 0x7B, 0x99, 0x77, 0x7B, 0x99, 0x99, 0xB7, 0x77, 0x99, 0xB7, 0xB9, 0x97, 0x7B, 
	0x47, 0xBB, 0x77, 0x77, 0xBB, 0x77, 0xBB, 0x77, 0x9B, 0xB9, 0x9B, 0x79, 0x99, 0x9B, 0x7B, 0x7F, 
	0xF6, 0xB7, 0x99, 0x77, 0x4B, 0x9B, 0xB9, 0xBB, 0x7B, 0xB4, 0xBB, 0x94, 0xBB, 0xB4, 0x94, 0x7B, 
	0x47, 0x9B, 0xB4, 0xB9, 0xB4, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0x4B, 0x9B, 0x4B, 0xB9, 0x74, 
	0xB7, 0x49, 0x4B, 0xBB, 0x49, 0xBB, 0x4B, 0xB7, 0xBB, 0x9B, 0xB9, 0xB4, 0x77, 0x99, 0x7B, 0x9F, 
	0xF9, 0x9B, 0x97, 0xBB, 0x9B, 0xB4, 0xBB, 0xB4, 0xB7, 0x99, 0xB7, 0xBB, 0xB7, 0xBB, 0x4B, 0xBB, 
	0xB4, 0x97, 0xBB, 0x79, 0xBB, 0x99, 0xBB, 0x4B, 0xB4, 0xBB, 0x99, 0xBB, 0x97, 0xBB, 0x79, 0x4B, 
	0xBB, 0xB4, 0xBB, 0x7B, 0xBB, 0x7B, 0x99, 0x7B, 0x4B, 0xBB, 0x4B, 0xB9, 0xBB, 0x79, 0xB9, 0xAF, 
	0x24, 0x79, 0x97, 0xB7, 0xBB, 0xB7, 0x77, 0x4B, 0x77, 0xBB, 0x77, 0x7B, 0xB9, 0xBB, 0x97, 0x7B, 
	0xB9, 0x77, 0x49, 0x77, 0x9B, 0x9B, 0xBB, 0x77, 0x77, 0xBB, 0xB9, 0xB9, 0x77, 0x94, 0x77, 0x9B, 
	0xB7, 0x79, 0xBB, 0x9B, 0xB7, 0x77, 0xBB, 0x77, 0xB4, 0x77, 0x7B, 0xBB, 0x7B, 0x79, 0x97, 0x52, 
	0x0F, 0x97, 0x94, 0x9B, 0xAD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 
	0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 
	0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xD9, 0xB9, 0x49, 0x7A, 0xF0, 
	0x02, 0xF6, 0x7B, 0xBB, 0xD5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5A, 0xBB, 0xB7, 0x9F, 0x20, 
	0x00, 0xF8, 0xB9, 0xBB, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xBB, 0x9B, 0xAF, 0x00, 
	0x00, 0xF8, 0x9B, 0x47, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x74, 0xB9, 0xAF, 0x00, 
	0x00, 0xF6, 0x9B, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0xB9, 0x9F, 0x00, 
	0x00, 0xF6, 0xB9, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0x9B, 0x9F, 0x00, 
	0x00, 0xF6, 0xBB, 0xB4, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x4B, 0xBB, 0x9F, 0x00, 
	0x00, 0xF6, 0x9B, 0x4B, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xB4, 0xB9, 0x9F, 0x00, 
	0x00, 0xF6, 0x77, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0x77, 0x9F, 0x00, 
	0x00, 0xF6, 0x7B, 0x77, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x77, 0xB7, 0x9F, 0x00, 
	0x00, 0xFA, 0xBB, 0x9B, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xB9, 0xBB, 0xDF, 0x00, 
	0x00, 0xF8, 0xB4, 0x9B, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xB9, 0x4B, 0xAF, 0x00, 
	0x00, 0xF6, 0x7B, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0xB7, 0x9F, 0x00, 
	0x00, 0xFA, 0xBB, 0x77, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x77, 0xBB, 0xCF, 0x00, 
	0x00, 0xF8, 0xB4, 0x99, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x99, 0x4B, 0xAF, 0x00, 
	0x00, 0xF6, 0xBB, 0x9B, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xB9, 0xBB, 0x9F, 0x00, 
	0x00, 0xF6, 0xB9, 0xB9, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x9B, 0x9B, 0x9F, 0x00, 
	0x00, 0xF8, 0xB4, 0x77, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x77, 0x4B, 0xAF, 0x00, 
	0x00, 0xFA, 0xBB, 0x77, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x77, 0xBB, 0xCF, 0x00, 
	0x00, 0xF6, 0x7B, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0xB7, 0x9F, 0x00, 
	0x00, 0xF8, 0xB4, 0x9B, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xB9, 0x4B, 0xAF, 0x00, 
	0x00, 0xFA, 0xBB, 0x9B, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xB9, 0xBB, 0xDF, 0x00, 
	0x00, 0xF6, 0x7B, 0x77, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x77, 0xB7, 0x9F, 0x00, 
	0x00, 0xF6, 0x77, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0x77, 0x9F, 0x00, 
	0x00, 0xF6, 0x9B, 0x4B, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xB4, 0xB9, 0x9F, 0x00, 
	0x00, 0xF6, 0xBB, 0xB4, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x4B, 0xBB, 0x9F, 0x00, 
	0x00, 0xF6, 0xB9, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0x9B, 0x9F, 0x00, 
	0x00, 0xF6, 0x9B, 0xB7, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x7B, 0xB9, 0x9F, 0x00, 
	0x00, 0xF8, 0x9B, 0x47, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0x74, 0xB9, 0xAF, 0x00, 
	0x00, 0xF8, 0xB9, 0xBB, 0xD5, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x5A, 0xBB, 0x9B, 0xAF, 0x00, 
	0x02, 0xF6, 0x7B, 0xBB, 0xD5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5A, 0xBB, 0xB7, 0x8F, 0x20, 
	0x0F, 0x87, 0x94, 0x9B, 0x9A, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA7, 0xB9, 0x49, 0x79, 0xF0, 
	0x2D, 0x79, 0x97, 0xB7, 0xBB, 0xB7, 0x77, 0x4B, 0x77, 0xBB, 0x77, 0x7B, 0xB9, 0xBB, 0x97, 0x7B, 
	0xB9, 0x77, 0x49, 0x77, 0x9B, 0x9B, 0xBB, 0x77, 0x77, 0xBB, 0xB9, 0xB9, 0x77, 0x94, 0x77, 0x9B, 
	0xB7, 0x79, 0xBB, 0x9B, 0xB7, 0x77, 0xBB, 0x77, 0xB4, 0x77, 0x7B, 0xBB, 0x7B, 0x79, 0x97, 0x42, 
	0xF9, 0x9B, 0x97, 0xBB, 0x9B, 0xB4, 0xBB, 0xB4, 0xB7, 0x99, 0xB7, 0xBB, 0xB7, 0xBB, 0x4B, 0xBB, 
	0xB4, 0x97, 0xBB, 0x79, 0xBB, 0x99, 0xBB, 0x4B, 0xB4, 0xBB, 0x99, 0xBB, 0x97, 0xBB, 0x79, 0x4B, 
	0xBB, 0xB4, 0xBB, 0x7B, 0xBB, 0x7B, 0x99, 0x7B, 0x4B, 0xBB, 0x4B, 0xB9, 0xBB, 0x79, 0xB9, 0x9F, 
	0xF6, 0xB7, 0x99, 0x77, 0x4B, 0x9B, 0xB9, 0xBB, 0x7B, 0xB4, 0xBB, 0x94, 0xBB, 0xB4, 0x94, 0x7B, 
	0x47, 0x9B, 0xB4, 0xB9, 0xB4, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0x4B, 0x9B, 0x4B, 0xB9, 0x74, 
	0xB7, 0x49, 0x4B, 0xBB, 0x49, 0xBB, 0x4B, 0xB7, 0xBB, 0x9B, 0xB9, 0xB4, 0x77, 0x99, 0x7B, 0x8F, 
	0xF7, 0xB7, 0xB9, 0x99, 0x97, 0xB9, 0x9B, 0xB9, 0x77, 0xBB, 0x77, 0xBB, 0x77, 0x77, 0xBB, 0x74, 
	0xB7, 0x79, 0x9B, 0x7B, 0x99, 0x77, 0x7B, 0x99, 0x99, 0xB7, 0x77, 0x99, 0xB7, 0xB9, 0x97, 0x7B, 
	0x47, 0xBB, 0x77, 0x77, 0xBB, 0x77, 0xBB, 0x77, 0x9B, 0xB9, 0x9B, 0x79, 0x99, 0x9B, 0x7B, 0x9F, 
	0x3B, 0x74, 0x77, 0xB9, 0x79, 0xAA, 0x99, 0x99, 0x99, 0xDA, 0x99, 0xA9, 0x99, 0x99, 0xD9, 0x99, 
	0x99, 0x9A, 0xD9, 0x99, 0xA9, 0x99, 0x9A, 0xA9, 0x9A, 0xA9, 0x99, 0x9A, 0x99, 0x9D, 0xA9, 0x99, 
	0x99, 0x9D, 0x99, 0x99, 0x9A, 0x99, 0xAD, 0x99, 0x99, 0x99, 0xAA, 0x87, 0x9B, 0x77, 0x47, 0xC3, 
	0x1F, 0xA7, 0xBB, 0x97, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x79, 0xBB, 0x7A, 0xF1, 
	0x01, 0xFC, 0x99, 0xA5, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x5A, 0x99, 0xCF, 0x10, 
	0x00, 0x13, 0xFF, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0xFF, 0x31, 0x00, 
};
