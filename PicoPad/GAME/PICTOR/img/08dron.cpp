#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 50 pixels
// image height: 36 lines
// image pitch: 50 bytes
const u16 DronImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0x0000, 0x2924, 0x1082, 0x2945, 0x9452, 0x1082, 0x1062, 0x18C3, 0x39A7, 0x0000, 0x0821, 0x3166, 0x2104, 0x7BCF, 0x0841, 
	0x0841, 0x20E4, 0x0000, 0x0020, 0x18C3, 0x1082, 0x39C7, 0x3186, 0x31A7, 0x52AB, 0x4208, 0x4208, 0x39E8, 0x4229, 0x18E3, 0x528A, 
	0x632D, 0x52AB, 0x2966, 0x5AEC, 0x8C51, 0x39E8, 0x39C8, 0x424A, 0x4A6A, 0x2945, 0x4A6A, 0x6B6D, 0x424A, 0x31C7, 0x5ACC, 0x5AEC, 
	0x6B8E, 0x39E9, 0x2125, 0x5B2E, 0x39E8, 0x5B0D, 0x52AB, 0x528B, 0x52CC, 0x632D, 0x4249, 0x2125, 0x4A69, 0x6B4D, 0x6B8E, 0x31A8, 
	0x3A09, 0x31C8, 0x3A09, 0x4229, 0x4249, 0x0022, 0x10A3, 0x2987, 0x31E9, 0x31A8, 0x52AC, 0x4A6A, 0x52EC, 0x4229, 0x73D0, 0x4A4A, 
	0x4A6A, 0x4A8A, 0x5AEC, 0x632D, 0x73CF, 0x7BF0, 0x8431, 0x10E4, 0x1925, 0x2987, 0x2146, 0x4229, 0x73D0, 0x52CB, 0x5B0C, 0x6B6E, 
	0x7C10, 0x4A6A, 0x5ACB, 0x3A09, 0x426A, 0x5B0D, 0x6B8F, 0x632D, 0x6B6E, 0x630C, 0x94B3, 0x0882, 0x424A, 0x5AED, 0x5B0D, 0x634E, 
	0x7C11, 0x6B8F, 0x73F0, 0x5B2D, 0x634E, 0x6B8F, 0x6B8E, 0xA576, 0x6B8E, 0x73AF, 0x94F4, 0x8451, 0x29A7, 0x6B8F, 0x634E, 0x634E, 
	0x636E, 0x6BAF, 0x634E, 0x7C31, 0x8472, 0x10C3, 0x634E, 0x634E, 0x5AEC, 0x52AB, 0x8C93, 0x636E, 0x5AEC, 0x9D35, 0x73F0, 0x634D, 
	0x52AB, 0x10A3, 0xB5F8, 0xC65A, 0xBE19, 0x29A7, 0x638F, 0xADB7, 0x42AC, 0x3A29, 0x4249, 0x6BAF, 0x4A8B, 0x5B2D, 0x73D0, 0x29A7, 
	0x6BD0, 0x73F1, 0x6BAF, 0x2986, 0x3A08, 0x5B6F, 0x6BF1, 0x5B4E, 0x4ACB, 0x6B8E, 0x3A4A, 0x7C52, 0x0062, 0x63D0, 0x63D0, 0x5B4E, 
	0x5B6E, 0x5B2D, 0x634E, 0x530D, 0x530D, 0x5B6E, 0x2187, 0x5BB0, 0x5BAF, 0x3208, 0x5B8F, 0x532D, 0x3A29, 0x536F, 0x538F, 0x532E, 
	0x4B2D, 0x6BF1, 0x4AEC, 0x426A, 0x5B6E, 0x530C, 0x638E, 0x636E, 0x4B2E, 0x534E, 0x42AB, 0x5BAF, 0x29C7, 0x5B6E, 0x532D, 0x63AF, 
	0x3AED, 0x430D, 0x430D, 0x432D, 0x432D, 0x432E, 0x4B6F, 0x4B4E, 0x4B4E, 0x4B2D, 0x4B4E, 0x4B4E, 0x5B8F, 0x532D, 0x5B8F, 0x5BAF, 
	0x530C, 0x3B0D, 0x430D, 0x432D, 0x536E, 0x534D, 0x52EC, 0x6BAE, 0x0861, 0x1082, 0x10A2, 0x8430, 0x0820, 0x8C50, 0x20C2, 0x18C2, 
	0x630C, 0x2103, 0x2944, 0x0841, 0x20E3, 0x1061, 0x3165, 0x18A2, 0x5A8A, 0x2861, 0x6AAA, 0x0000, 0x0000, 0x3186, 0x2945, 0x2965, 
};

const u8 DronImg[1800] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xD2, 0xBE, 0xC8, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xC1, 0x9B, 0x85, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xB7, 0x8A, 0x82, 0x01, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xCB, 0xA1, 0x5C, 0x37, 0x46, 0xA3, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xD0, 0xAD, 0x96, 0x81, 0x84, 0x2E, 0x6B, 0x9F, 0xD8, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0xD7, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xAD, 0x9B, 0x65, 0x83, 0x8A, 0x2A, 0x58, 0xA3, 0xE4, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 
	0xA7, 0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0xD5, 
	0xBE, 0xCE, 0xD8, 0x00, 0xBA, 0x7D, 0x87, 0xA2, 0x8A, 0x56, 0x1A, 0x47, 0x58, 0xDF, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCD, 0xA7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 0xBB, 0x9F, 
	0x91, 0x3D, 0x3E, 0x52, 0x70, 0x9E, 0x9D, 0x73, 0x71, 0x7A, 0x55, 0x1C, 0x41, 0x58, 0xCF, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xE2, 0x95, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC9, 0xAC, 
	0x01, 0xFC, 0x61, 0x8D, 0x8A, 0x8E, 0x79, 0x75, 0x76, 0xA1, 0x84, 0x39, 0x17, 0x40, 0x57, 0xE7, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB3, 0x5A, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB7, 
	0xFB, 0xF9, 0x89, 0x6A, 0x92, 0x8D, 0x77, 0x8D, 0x30, 0x60, 0x84, 0x54, 0x39, 0x29, 0x2D, 0x58, 
	0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD3, 0x46, 0xAF, 0x00, 0x00, 0x00, 0x00, 
	0xB8, 0x16, 0xFA, 0x05, 0xA9, 0x6A, 0x97, 0x97, 0x77, 0x6A, 0x8D, 0x79, 0x84, 0x55, 0x3B, 0x3F, 
	0x57, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB3, 0x45, 0xDC, 0x00, 
	0x00, 0xD5, 0x21, 0x65, 0xAB, 0x8D, 0x30, 0x7A, 0x94, 0x7A, 0x0D, 0x13, 0x1D, 0x7A, 0xF0, 0x54, 
	0x5F, 0x46, 0xA3, 0xD4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD1, 0x46, 
	0xC2, 0x00, 0x00, 0xB4, 0x01, 0xEF, 0xF3, 0x1F, 0x93, 0x92, 0x93, 0x61, 0x01, 0x01, 0x01, 0x54, 
	0x0E, 0x20, 0x72, 0x9C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xDA, 0x6B, 0xBD, 0xE3, 0x0B, 0x1B, 0x30, 0xF0, 0xEC, 0x1F, 0x94, 0x94, 0x2B, 0x01, 0x01, 
	0x01, 0x56, 0x7A, 0x30, 0x5F, 0x8E, 0xD1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xD4, 0xBD, 0xB8, 0xAD, 0xAE, 0xD3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xAF, 0x99, 0x64, 0xF3, 0x18, 0x89, 0x6A, 0xEB, 0xEC, 0x55, 0x94, 0x56, 
	0x1F, 0x1C, 0x20, 0x6A, 0x8A, 0x54, 0x79, 0x6E, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 
	0xBD, 0xB7, 0xAD, 0xA6, 0xA1, 0x70, 0x71, 0x66, 0x4E, 0x74, 0x36, 0xC9, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAA, 0x11, 0x0E, 0xF0, 0xF2, 0x1A, 0x8D, 0x1F, 0xFF, 
	0x7A, 0x7A, 0x7A, 0x7A, 0x6A, 0x83, 0x56, 0x55, 0x62, 0xF4, 0xCE, 0xBE, 0xB8, 0xAE, 0xA0, 0xA1, 
	0x70, 0x70, 0x72, 0x4E, 0x9E, 0x81, 0x66, 0x68, 0x53, 0x62, 0x2E, 0x28, 0x5B, 0xCD, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xD4, 0xBD, 0xBD, 0xBD, 0xDB, 0x00, 0xC2, 0xE8, 0x6A, 0x93, 0x19, 0x0C, 0x60, 
	0x54, 0x0D, 0x54, 0x8A, 0x24, 0x60, 0x0E, 0x3D, 0x78, 0x79, 0x3C, 0xF1, 0x27, 0x33, 0x80, 0x68, 
	0x76, 0x78, 0x30, 0x66, 0x8F, 0x69, 0x69, 0x69, 0x8C, 0x5D, 0x1A, 0xA4, 0x44, 0x36, 0x9C, 0xC6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xD9, 0xC4, 0x9C, 0xB6, 0x57, 0x7C, 0x42, 0x32, 0x1D, 0x84, 0x5E, 
	0x0C, 0x69, 0x39, 0x09, 0x8F, 0x56, 0x30, 0x2B, 0xEB, 0xED, 0x3E, 0x38, 0x62, 0xFD, 0x29, 0x4B, 
	0x52, 0x2E, 0x52, 0x8C, 0x8C, 0x8C, 0x89, 0x2A, 0x5E, 0x39, 0x67, 0x86, 0x87, 0x7E, 0x80, 0x67, 
	0x5D, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0xD9, 0xBF, 0xA4, 0x01, 0x13, 0x22, 
	0x4C, 0x44, 0x0C, 0x38, 0x1D, 0xF4, 0x3C, 0x1F, 0x51, 0x23, 0x2B, 0x24, 0x0E, 0x1A, 0x18, 0xF6, 
	0x18, 0x64, 0x37, 0x2E, 0x73, 0x82, 0x87, 0x80, 0x66, 0x81, 0x76, 0x5F, 0x82, 0x6F, 0x6F, 0x7F, 
	0x67, 0x73, 0x88, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD3, 0xBC, 
	0x15, 0x29, 0x25, 0x3B, 0x0D, 0x8C, 0x17, 0x14, 0x19, 0x51, 0x51, 0x09, 0xFE, 0x11, 0x04, 0x3A, 
	0x4D, 0xF1, 0x18, 0x6D, 0x9D, 0x8B, 0x66, 0x71, 0x71, 0x81, 0x81, 0x75, 0x76, 0x68, 0x68, 0x68, 
	0x80, 0x6F, 0x82, 0x82, 0x74, 0x90, 0xDE, 0xD1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xBE, 0xA8, 0x6B, 0x0B, 0x15, 0xEC, 0x1B, 0x36, 0x06, 0x1C, 0x23, 0x4D, 0x50, 0x0C, 0xF5, 0xFB, 
	0x1E, 0x2C, 0x1C, 0xEE, 0x29, 0x44, 0x4F, 0x50, 0x51, 0x37, 0x36, 0x89, 0x89, 0x5D, 0x38, 0x4C, 
	0x73, 0x67, 0x7F, 0x80, 0x7F, 0x2A, 0x1A, 0xFD, 0x53, 0x83, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x98, 0x45, 0xA8, 0xCD, 0xE9, 0xEA, 0xF4, 0x37, 0x11, 0xE8, 0x2E, 0x1B, 0x17, 0x25, 0x2D, 
	0xEA, 0x07, 0x3B, 0x34, 0x02, 0xF4, 0x40, 0x9C, 0x89, 0x89, 0x5D, 0x90, 0x28, 0x51, 0x61, 0x50, 
	0x28, 0x51, 0x61, 0x50, 0x50, 0x50, 0x3A, 0x17, 0xF6, 0x02, 0x10, 0xE9, 0x2D, 0xC0, 0x00, 0x00, 
	0x00, 0xD6, 0xA5, 0xCC, 0xC2, 0x00, 0x00, 0x8B, 0x22, 0x3B, 0xE9, 0x07, 0x19, 0x2A, 0x1E, 0x14, 
	0x04, 0x02, 0xF7, 0x1E, 0x3B, 0x22, 0xF7, 0x11, 0x31, 0x4B, 0x4A, 0x6E, 0x80, 0x80, 0x8B, 0x82, 
	0x67, 0x82, 0x68, 0x5F, 0x74, 0x67, 0x67, 0x65, 0x4C, 0x4C, 0x9C, 0x5B, 0xC2, 0xD2, 0x00, 0x00, 
	0x00, 0x00, 0xE1, 0xBD, 0xBB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x08, 0x08, 0x09, 0x09, 0x91, 
	0x91, 0x11, 0xF5, 0xFC, 0xF5, 0xF1, 0x0D, 0xF7, 0xFC, 0x6B, 0x5A, 0x26, 0x42, 0x27, 0x28, 0x36, 
	0x52, 0x5E, 0x74, 0x78, 0x5F, 0x8F, 0x67, 0x73, 0x73, 0x35, 0x35, 0x65, 0x4A, 0x9D, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD1, 0xA6, 0x16, 0xEE, 0x0A, 0x0B, 
	0x03, 0x07, 0x1E, 0x55, 0x3C, 0x01, 0x01, 0xF4, 0x01, 0x01, 0xE6, 0xC2, 0x43, 0x34, 0x49, 0x7C, 
	0x41, 0xA4, 0x43, 0x27, 0x3A, 0x2A, 0x38, 0x8C, 0x5E, 0x74, 0x68, 0x8F, 0x6E, 0x6D, 0x2C, 0xB0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x32, 0x91, 0xF8, 
	0x03, 0x01, 0x01, 0x12, 0x0B, 0x29, 0x2F, 0x79, 0xE9, 0x91, 0x5B, 0xDD, 0x00, 0x00, 0x00, 0xE2, 
	0xDD, 0xC5, 0xA8, 0x4B, 0x43, 0x31, 0x7C, 0x49, 0x43, 0x27, 0x64, 0x4F, 0x1A, 0x90, 0x38, 0x4C, 
	0x6C, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE6, 
	0x01, 0x0F, 0x9D, 0xE0, 0xE9, 0x11, 0x3B, 0x11, 0x48, 0x84, 0x54, 0xC8, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD9, 0xDD, 0xB4, 0x89, 0x64, 0x40, 0x63, 0x3F, 0x49, 0x41, 
	0x26, 0x43, 0x34, 0xC9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xDA, 0x29, 0x12, 0x5A, 0x00, 0x00, 0xE1, 0x00, 0xE2, 0xA8, 0x57, 0x60, 0x84, 0xBD, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xD9, 0xC0, 0xC5, 
	0xA8, 0x4B, 0x48, 0x47, 0x7C, 0xD3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xB1, 0x0F, 0x12, 0x9A, 0x00, 0x00, 0x00, 0x00, 0xDA, 0x32, 0x34, 0x60, 
	0x72, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xD2, 0xE5, 0xE0, 0xBB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBD, 0x14, 0x08, 0x01, 0xB4, 0x00, 0x00, 0x00, 0x00, 0xDF, 
	0x46, 0x50, 0x7B, 0x81, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA8, 0x01, 0xC3, 0xA8, 0xC8, 0x00, 0x00, 
	0x00, 0x00, 0xB5, 0x6B, 0x21, 0x7A, 0x5E, 0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0xE8, 0xC0, 0xC5, 0xC8, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x58, 0x4F, 0xE0, 0x34, 0xDB, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0x9A, 
	0xC9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x32, 0x85, 0xDB, 0x8C, 0xE4, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDE, 0xBC, 0x9C, 0xCF, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD4, 0xCA, 0xB9, 0xDA, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};