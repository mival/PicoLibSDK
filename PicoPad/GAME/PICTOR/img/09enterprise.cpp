#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 60 pixels
// image height: 17 lines
// image pitch: 60 bytes
const u16 EnterpriseImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0xA410, 0xACD3, 0xA472, 0xA4D3, 0xA3F1, 0xA432, 0xC536, 0xA493, 0xBD56, 0xC5B8, 0xACD4, 0xC5D8, 0xC5D8, 0xBDB7, 0xAD15, 
	0xC5F8, 0xA535, 0xBE18, 0xBE19, 0x73F1, 0xAD97, 0xAD76, 0x6BD1, 0xE75E, 0xEF7D, 0xEF7E, 0xE75D, 0xE75D, 0xE73D, 0xE71C, 0xA577, 
	0xB5D8, 0xEF9E, 0x636E, 0x9515, 0x8CD4, 0xADD8, 0x8CB3, 0xB5F8, 0xAD97, 0xB5B7, 0xBE39, 0x638F, 0x9515, 0x8CD4, 0xA597, 0xADD8, 
	0xB5D8, 0xB5D8, 0x9D35, 0x7C11, 0xBE19, 0xC659, 0x9D77, 0xA597, 0x94F4, 0xDF3D, 0xBDF8, 0x636E, 0x638F, 0x73F0, 0xA597, 0x9D76, 
	0x9D56, 0xA597, 0xA597, 0xADB8, 0xA597, 0xADB8, 0xADD8, 0xADB7, 0xB619, 0xCE9B, 0xC659, 0xBE39, 0xBE39, 0xCE7A, 0x532D, 0x5B4E, 
	0x7C52, 0x8CD4, 0xADD8, 0xADB7, 0xA5B7, 0x9D56, 0xB5F9, 0xB5F8, 0xADF8, 0x94F4, 0xADB7, 0x9D35, 0xBE39, 0xC67A, 0xD6FC, 0x534E, 
	0x9D56, 0x8CD4, 0x8472, 0xA576, 0xADB7, 0xB5F8, 0xADD8, 0x8451, 0xBE39, 0x42AB, 0x532E, 0x5B8F, 0x5B6E, 0x5B4E, 0x8CF5, 0x7C51, 
	0x8CF4, 0x8CF4, 0x9535, 0xB619, 0x9535, 0xADB7, 0xADD7, 0x636E, 0x7C31, 0x8451, 0xADD7, 0xC67A, 0xB5F8, 0xADB6, 0xB5D7, 0xB5B6, 
	0x4AEC, 0x5B6E, 0x638F, 0x63AF, 0x84D4, 0x84B3, 0x7C72, 0x7C31, 0xA596, 0xBE59, 0xBE18, 0x42CC, 0x42EC, 0x3A8B, 0x42EC, 0x4AED, 
	0x42AC, 0x4B0D, 0x534E, 0x42CC, 0x536E, 0x63D0, 0x6BF0, 0x7411, 0x52EC, 0x8CD4, 0x73F0, 0x636E, 0x8CD3, 0x9514, 0x9D55, 0xBE5A, 
	0x94B3, 0x8451, 0x3ACC, 0x3ACC, 0x430D, 0x3ACC, 0x3AAB, 0x42EC, 0x42CC, 0x3A8B, 0x4B2E, 0x3AAB, 0x42ED, 0x4B2D, 0x42CC, 0x6C10, 
	0xAE19, 0x638E, 0x9D55, 0xC659, 0x3AED, 0x3AED, 0x3AEC, 0x3ACC, 0x3AED, 0x3AEC, 0x3ACC, 0x430D, 0x3ACC, 0x42ED, 0x3AAB, 0x3AEC, 
	0x3ACC, 0x430D, 0x42ED, 0x430D, 0x42EC, 0x536E, 0x534E, 0x6C31, 0x9576, 0x8492, 0x3AED, 0x3AED, 0x3B0D, 0x3ACC, 0x430D, 0x430D, 
	0x42EC, 0x6BF0, 0x42EC, 0x532D, 0x63AF, 0x530C, 0x9D55, 0x52EB, 0xADF7, 0x9D55, 0xA555, 0xADB6, 0x6BAE, 0x8471, 0x638E, 0xADD6, 
	0xA596, 0xAD75, 0x8490, 0xAD55, 0x9D32, 0xADD4, 0xBE16, 0xB5D5, 0xBDF5, 0x7BCE, 0x6B4C, 0xA513, 0x842F, 0xCE36, 0x94B2, 0xD678, 
	0xAD34, 0xAD33, 0xA4F2, 0xC5D6, 0xBDD6, 0xB533, 0xAD75, 0xA513, 0xB575, 0x9B4A, 0xACF2, 0xBC8F, 0xAD54, 0xAD55, 0xC618, 0x52AA, 
};

const u8 EnterpriseImg[1020] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB4, 0xDC, 0xC4, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xD0, 0xD1, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xBE, 0xFB, 0xED, 0xF8, 0xEF, 0xFE, 0x7E, 0x7D, 0x5B, 0x9D, 0x9C, 0x62, 0x86, 0xAF, 
	0x83, 0x95, 0x6B, 0xC6, 0x92, 0xAA, 0xBD, 0xBB, 0xCB, 0xCE, 0xC2, 0xCB, 0xB5, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDE, 
	0xE7, 0xEF, 0xE6, 0xDD, 0xD4, 0xB9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF9, 
	0xF4, 0xA0, 0x7C, 0x66, 0x46, 0xFD, 0x01, 0x05, 0x05, 0x06, 0x03, 0x08, 0x0B, 0x0F, 0x11, 0x5B, 
	0x63, 0x88, 0x28, 0x31, 0x34, 0x7E, 0xF1, 0xF0, 0xFC, 0xF7, 0xEE, 0xA1, 0x6F, 0x6B, 0x5F, 0x00, 
	0xB5, 0xBB, 0xA2, 0xB8, 0xA4, 0xC1, 0xCF, 0xD3, 0xDC, 0xE2, 0xE4, 0xE5, 0xE8, 0xE8, 0xE8, 0xE8, 
	0xE8, 0xEB, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA6, 0xF9, 0xF3, 0xE3, 0x3A, 0x29, 
	0x20, 0x34, 0x2A, 0x13, 0x10, 0x10, 0x0D, 0x0C, 0x0A, 0x0A, 0x0E, 0x46, 0x48, 0x30, 0x27, 0x1F, 
	0x07, 0x09, 0x09, 0x09, 0x12, 0x9F, 0x14, 0x17, 0x32, 0x14, 0x4E, 0x00, 0xA8, 0x49, 0x21, 0x1A, 
	0x1A, 0x18, 0x18, 0x39, 0x39, 0x5E, 0x49, 0x8A, 0xD8, 0xE0, 0xE0, 0xDB, 0xDF, 0xDF, 0xDF, 0xD9, 
	0xC9, 0x79, 0x87, 0x9A, 0x3D, 0x2B, 0x00, 0xA9, 0x98, 0x77, 0x9A, 0x3B, 0x3B, 0x3C, 0x24, 0x32, 
	0x2D, 0x50, 0x26, 0x38, 0x23, 0x32, 0x40, 0x3F, 0x36, 0x3E, 0x42, 0x41, 0x37, 0x54, 0x43, 0x43, 
	0x43, 0x52, 0x45, 0x2E, 0x2C, 0x6A, 0xBA, 0x00, 0x00, 0xB7, 0xA6, 0xA9, 0xAB, 0xAE, 0x90, 0x91, 
	0x97, 0x2F, 0x44, 0xE0, 0x26, 0x62, 0x79, 0x78, 0x67, 0x78, 0xD1, 0x9D, 0x9E, 0x55, 0x63, 0xDA, 
	0x38, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB4, 0x5C, 0x44, 0x96, 0x00, 0x00, 0x00, 
	0xCA, 0xA2, 0xB9, 0xB9, 0xBC, 0xA7, 0x8B, 0xA8, 0x8C, 0xAC, 0x8E, 0x8F, 0x91, 0xA6, 0xB4, 0xB4, 
	0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB9, 0x95, 0x25, 
	0xE1, 0x38, 0x33, 0x22, 0x69, 0xA3, 0xB4, 0xC5, 0xB0, 0x73, 0x7B, 0x7B, 0x27, 0x63, 0xA5, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xCB, 0x8A, 0x40, 0x95, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB6, 0x9B, 0xEE, 0xAB, 0xCA, 
	0x00, 0x00, 0x00, 0x00, 0xBD, 0xC8, 0x9F, 0x5D, 0xB3, 0x48, 0x88, 0xC0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xCC, 0x27, 0x44, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xB6, 0xC7, 0x73, 0x7C, 0x5A, 0x7A, 0x9E, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xCC, 0x47, 0x55, 
	0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB4, 0xBF, 0xD3, 0x99, 
	0xB2, 0x7D, 0x68, 0x35, 0x7A, 0xC6, 0xAA, 0xCF, 0xCC, 0xA4, 0x41, 0x60, 0xC3, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xD7, 0xF2, 0xF0, 0x88, 0x76, 0x5D, 0x1E, 0x1B, 
	0x19, 0x1C, 0x1D, 0x1C, 0x1B, 0x5E, 0x60, 0x6E, 0x59, 0x87, 0xAF, 0x97, 0xBD, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xB6, 0xD7, 0xE9, 0xF5, 0x7F, 0xF6, 0x11, 0xE1, 0x7D, 0x12, 0x4D, 0x4B, 0x4B, 0x89, 
	0x4C, 0x7B, 0x61, 0x51, 0x64, 0x35, 0x5D, 0x4A, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB4, 0xFF, 
	0xEC, 0xF1, 0xE3, 0xFA, 0x03, 0x02, 0x04, 0x0F, 0x15, 0x16, 0x28, 0x54, 0x44, 0x58, 0x53, 0x56, 
	0x57, 0x65, 0x75, 0x3E, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xD7, 0xEB, 0xF1, 0xDA, 
	0xD6, 0x72, 0x74, 0x74, 0x71, 0x70, 0x71, 0x71, 0x99, 0x99, 0x85, 0x84, 0x50, 0x91, 0xBD, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEA, 0xEA, 0xB1, 0x81, 0x6C, 0x6D, 0xD5, 
	0x80, 0x80, 0x93, 0x90, 0x8D, 0xA5, 0x00, 0xC0, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
