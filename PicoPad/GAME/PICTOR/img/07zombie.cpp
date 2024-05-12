#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 30 pixels
// image height: 35 lines
// image pitch: 30 bytes
const u16 ZombieImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0x40C3, 0x4020, 0x2820, 0x4821, 0x1800, 0x60E4, 0x9A49, 0x5062, 0x4062, 0x30A3, 0x5A8A, 0x5966, 0x6AEB, 0x5269, 0x62AA, 
	0x4125, 0x28C3, 0x7ACC, 0x41C7, 0x3905, 0x4186, 0x5A49, 0x62AB, 0x1021, 0x71A8, 0x5229, 0x62EB, 0x7B4D, 0x28A3, 0x732D, 0x1821, 
	0x1862, 0x2083, 0x2083, 0x20A3, 0x28C4, 0x1882, 0x3925, 0x2904, 0x49C8, 0x0841, 0x20A3, 0x3146, 0x4A29, 0x1062, 0x4A08, 0x6B2D, 
	0x2925, 0x524A, 0x52AA, 0x630D, 0x4A2A, 0x528B, 0x632D, 0x2105, 0x5AEC, 0x73CF, 0x7BF0, 0x52AB, 0x634E, 0x5B0D, 0x31A6, 0x8CD3, 
	0xADD7, 0x8C92, 0xBE38, 0x9D34, 0xCEDA, 0xEF9D, 0xCE99, 0xDF1B, 0xF7DE, 0xC658, 0xD6DA, 0xE73B, 0xBE17, 0xE75C, 0xAD95, 0xEF9D, 
	0x5B0B, 0xF7BD, 0xFFFF, 0x1900, 0x6BE3, 0x94EE, 0x6C02, 0x6382, 0x6C03, 0x6BE3, 0x6383, 0x844B, 0x6B6A, 0x52C9, 0x3A01, 0x5B61, 
	0x6BC2, 0x4282, 0x6BE3, 0x7403, 0x6BE3, 0x63A3, 0x7424, 0x7C84, 0x7C64, 0x6BA4, 0x6B87, 0x6B69, 0x6BC3, 0x6BC3, 0x8CC8, 0x9D2D, 
	0x73CB, 0x2120, 0x29A1, 0x52C2, 0x5B07, 0x6B88, 0x8CAC, 0xAD91, 0xFFDE, 0x10A0, 0x4241, 0x5B03, 0x73C4, 0x8485, 0xA549, 0x7C0A, 
	0x4A87, 0x94B1, 0x4222, 0x52A3, 0x6344, 0x8427, 0x73A9, 0x4204, 0x52C8, 0x6B63, 0x0020, 0x0860, 0x2124, 0xA533, 0x5ACA, 0x6B66, 
	0x5284, 0x39A1, 0x4A48, 0x6B2B, 0xA532, 0x5AA8, 0x3160, 0x39A3, 0x52A8, 0xDEFA, 0x5267, 0x9CD2, 0xBDB4, 0x8C2F, 0x2943, 0x9C6E, 
	0x52AA, 0x6AC3, 0x5204, 0x2944, 0xE6FA, 0xFFBE, 0x5289, 0x8C50, 0xB553, 0xC5F6, 0x9325, 0x6B4C, 0xA513, 0x6AEA, 0x738D, 0xF75C, 
	0x7265, 0x734C, 0xB595, 0x5AEB, 0x69C3, 0xE636, 0x6B2B, 0x9450, 0x4207, 0xDE58, 0x6B2C, 0x6B6D, 0x61A4, 0x3944, 0xF6B9, 0x5A48, 
	0x83CE, 0x838D, 0x38C1, 0xC2C6, 0xA34A, 0x2945, 0x1061, 0x72EA, 0xD595, 0xF573, 0xB40F, 0xCD33, 0x5A89, 0xBC70, 0xFE37, 0xFE37, 
	0x6289, 0x50C1, 0xD4F2, 0x6AAA, 0xB4D2, 0x89A5, 0xFCF2, 0x8B0B, 0x9B6D, 0x93EF, 0xCBCE, 0xB38D, 0x4040, 0x2840, 0x1841, 0x69A6, 
	0xB061, 0xD0A1, 0x9081, 0x3020, 0x5881, 0x78E3, 0xA165, 0x6144, 0xBA69, 0x834D, 0x5000, 0x6020, 0x4800, 0x1000, 0x2000, 0x4841, 
	0x0000, 0x0800, 0x2841, 0x60A2, 0x0000, 0x8124, 0x81E7, 0x69E7, 0x7A49, 0x20A2, 0x59C7, 0x3165, 0x528A, 0x4A49, 0x0000, 0x0000, 
};

const u8 ZombieImg[1050] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x5C, 0x6A, 0x5A, 
	0x69, 0x6B, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x5C, 0x6A, 0x5A, 0x57, 0x57, 0x57, 0x57, 0x57, 
	0x65, 0x6A, 0x5C, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x8E, 0x6B, 0x5A, 0x60, 0x5F, 0x60, 0x58, 0x58, 0x56, 0x58, 0x63, 0x58, 0x62, 
	0x62, 0x6C, 0x86, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xF6, 0x89, 0x63, 0x57, 0x60, 0x58, 0x58, 0x56, 0x66, 0x68, 0x63, 0x58, 0x63, 0x63, 0x62, 0x64, 
	0x6C, 0x69, 0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x97, 0xF3, 0xD5, 
	0xB0, 0x60, 0x54, 0x5A, 0x59, 0x66, 0x68, 0x66, 0x68, 0x66, 0x64, 0x64, 0x64, 0x65, 0x65, 0x5A, 
	0x5A, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x75, 0x73, 0xC2, 0xF3, 0xDB, 0x7C, 
	0x63, 0x5A, 0x87, 0x98, 0x69, 0x69, 0x7D, 0x67, 0x66, 0x7C, 0x7C, 0x84, 0x7B, 0x7B, 0x7B, 0x7B, 
	0xB1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x8B, 0xBC, 0xE7, 0xDE, 0xC4, 0x7D, 0x5A, 0x74, 
	0xA9, 0xA4, 0x7F, 0x9D, 0x69, 0x91, 0x7D, 0x7D, 0x85, 0x85, 0x8F, 0x8F, 0x90, 0x83, 0x83, 0xB3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x8C, 0xF8, 0xF2, 0x0A, 0xB0, 0x7B, 0x6B, 0x99, 0x78, 0x78, 
	0x6F, 0x99, 0x6A, 0xAE, 0x84, 0x7E, 0x6E, 0x6E, 0x85, 0x85, 0x84, 0x90, 0x82, 0xA1, 0x00, 0x00, 
	0x00, 0x00, 0x50, 0x8B, 0x81, 0xBB, 0xFA, 0xE9, 0x9F, 0x74, 0x4F, 0x52, 0x52, 0x51, 0x5B, 0x78, 
	0x55, 0x99, 0x86, 0x85, 0xA1, 0xC3, 0xAA, 0x69, 0x84, 0x90, 0x82, 0x5E, 0xD5, 0x00, 0x00, 0x00, 
	0x5D, 0x92, 0x46, 0x43, 0x46, 0x47, 0x4B, 0x4A, 0x51, 0x78, 0x52, 0x78, 0x4D, 0x78, 0x76, 0x45, 
	0x94, 0x7B, 0xB4, 0xE6, 0xE5, 0xA1, 0x61, 0x82, 0x82, 0x72, 0xC2, 0x00, 0x00, 0x00, 0x80, 0x8D, 
	0x47, 0x47, 0x45, 0x4F, 0x48, 0xA5, 0xCE, 0xC9, 0xD6, 0xCF, 0x78, 0x51, 0x4A, 0x4B, 0x77, 0x7A, 
	0x91, 0x02, 0x02, 0xE6, 0xB4, 0x96, 0x72, 0x71, 0x95, 0x00, 0x00, 0x00, 0x97, 0xDA, 0xC8, 0x4F, 
	0x48, 0x48, 0xAF, 0xE8, 0xE5, 0xDF, 0xD7, 0xDB, 0xDA, 0xBE, 0x4F, 0x4A, 0x9D, 0x72, 0x5E, 0x8B, 
	0xFF, 0x05, 0xF5, 0xE5, 0x71, 0x79, 0x9A, 0x00, 0x00, 0x00, 0xA2, 0x0A, 0xEC, 0x49, 0x45, 0x45, 
	0xA9, 0x13, 0x2B, 0xF8, 0xD2, 0xAF, 0x4F, 0xDB, 0xBE, 0x4B, 0xAC, 0x9E, 0x5E, 0x5E, 0x53, 0x8A, 
	0xED, 0xF3, 0xD1, 0x8B, 0x92, 0x00, 0x00, 0x00, 0x92, 0x0A, 0x03, 0x28, 0x40, 0x40, 0x3F, 0x30, 
	0xEF, 0xDC, 0x03, 0xE4, 0xCA, 0x4A, 0xCD, 0x4B, 0x49, 0xAB, 0x5E, 0x5E, 0x79, 0x71, 0xFF, 0xF1, 
	0x08, 0xDD, 0xA6, 0x00, 0x00, 0x00, 0x0B, 0xF1, 0x29, 0xED, 0x3B, 0x42, 0x33, 0x03, 0xED, 0x03, 
	0xEA, 0xEC, 0xEE, 0xF8, 0x41, 0x46, 0x4C, 0x9B, 0x73, 0x72, 0x92, 0x9C, 0xCB, 0xFB, 0xF1, 0x04, 
	0x93, 0x00, 0x00, 0x00, 0x00, 0x30, 0x06, 0xEE, 0xC1, 0x78, 0xCA, 0x03, 0x3E, 0xE1, 0xE2, 0xE1, 
	0xEC, 0x02, 0x19, 0xB2, 0x4C, 0x8D, 0x83, 0xAD, 0xA9, 0x01, 0x06, 0xD8, 0xFF, 0xED, 0xB3, 0x00, 
	0x00, 0x00, 0x00, 0x1B, 0xD8, 0xEB, 0xA4, 0x4D, 0xBE, 0xE0, 0x06, 0xE8, 0xE1, 0xE0, 0xEB, 0xEB, 
	0xDB, 0x4C, 0x46, 0x4C, 0x97, 0x9D, 0xD3, 0xD7, 0xCB, 0xCA, 0xF4, 0xB8, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xFA, 0x01, 0xD8, 0x52, 0x4F, 0x47, 0xDA, 0xE2, 0xEB, 0xEB, 0xEA, 0xE4, 0xF5, 0xB9, 0x46, 
	0x4A, 0xB2, 0xBD, 0x0D, 0x0A, 0xCD, 0xD2, 0xCA, 0x8B, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 
	0x08, 0x99, 0x4F, 0x4B, 0x4C, 0x4C, 0xC8, 0xE8, 0xE6, 0xD5, 0xD5, 0xCA, 0x4E, 0x3C, 0x36, 0x2C, 
	0x1E, 0xA9, 0x09, 0xF8, 0xD2, 0xBF, 0xC5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x14, 0x35, 
	0x34, 0x3A, 0x49, 0xB2, 0xAF, 0x49, 0x0C, 0x05, 0x11, 0x35, 0x2E, 0x38, 0x34, 0x31, 0xB7, 0xD0, 
	0xF6, 0xCB, 0xCD, 0xC6, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x32, 0x22, 0x2D, 
	0x14, 0xAC, 0xA4, 0xD2, 0x07, 0x06, 0x24, 0x15, 0x10, 0x1E, 0x35, 0x2F, 0x1C, 0xA8, 0xB5, 0xCD, 
	0xF9, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x3C, 0x37, 0x3B, 0x0D, 0x4D, 
	0xB9, 0xF7, 0xEB, 0xEB, 0xF0, 0xF0, 0xF0, 0x1C, 0x3A, 0x1B, 0x13, 0xB7, 0xC7, 0x18, 0xA3, 0xB3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3D, 0x17, 0xC0, 0xD8, 0xD4, 0xA9, 0xE9, 
	0x04, 0x03, 0xFF, 0xFE, 0xE7, 0xA7, 0xA7, 0x27, 0xFF, 0xF4, 0xFF, 0x9E, 0xB3, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xC5, 0x93, 0x4E, 0x9B, 0xC0, 0x0B, 0xF9, 0xF0, 
	0xF0, 0xE5, 0xE9, 0x41, 0x2C, 0x18, 0x25, 0x18, 0xF1, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x3E, 0x8E, 0xBA, 0xB1, 0x1A, 0x28, 0x05, 0xE3, 0xDF, 0x12, 
	0x39, 0x31, 0x1F, 0x26, 0x0B, 0xFB, 0x2B, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1B, 0xFA, 0xF7, 0x08, 0x07, 0xD5, 0xF6, 0xF8, 0x2F, 0x39, 0x28, 0x20, 
	0x1F, 0x16, 0xAE, 0xCC, 0x15, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x38, 0xFC, 0x41, 0xD9, 0xD4, 0xDB, 0xB2, 0xD9, 0x33, 0x26, 0x21, 0x20, 0x24, 0x0D, 
	0x9D, 0xAE, 0x0E, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xFC, 0x3F, 0x42, 0xD4, 0x44, 0xB7, 0x39, 0x28, 0x24, 0x22, 0x23, 0x21, 0x2B, 0xB1, 0x81, 0xA7, 
	0xB1, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 
	0x3D, 0x38, 0x38, 0x2E, 0x0E, 0xFD, 0x1B, 0x23, 0x1D, 0x23, 0x13, 0xAE, 0x9B, 0x9B, 0x9D, 0xAE, 
	0xBB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0xFD, 
	0x13, 0x00, 0x00, 0x00, 0x00, 0xCC, 0x1D, 0x24, 0x2E, 0xAE, 0x9B, 0x8D, 0x94, 0xB7, 0xC0, 0x32, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xFC, 0x15, 0x26, 0x1A, 0xB1, 0x9B, 0x9C, 0xA8, 0x8D, 0x9D, 0xFD, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xB3, 0x27, 0xCC, 0xB6, 0x81, 0xA9, 0x9C, 0x9D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xFD, 0x25, 0x0E, 0xB6, 0xB7, 0xA8, 0xAB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x2A, 
	0x13, 0xB6, 0xBA, 0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2C, 0x0B, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
