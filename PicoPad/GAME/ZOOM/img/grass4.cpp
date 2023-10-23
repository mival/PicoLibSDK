#include "../include.h"

// format: compressed 8-bit paletted pixel graphics
// image width: 320 pixels
// image height: 184 lines
// image pitch: 320 bytes
const u16 Grass4Img_Pal[120] __attribute__ ((aligned(4))) = {
	0x5390, 0x5BD1, 0x53B1, 0x5390, 0x5BD1, 0x53B1, 0x53B0, 0x5BD1, 0x5BD1, 0x53B1, 0x430E, 0x4B4F, 0x4B2E, 0x4B6F, 0x4B4F, 0x5370, 
	0x4B70, 0x4B6F, 0x4B6F, 0x4B4F, 0x4B4F, 0x53B0, 0x5390, 0x4B6F, 0x53B1, 0x53B1, 0x5390, 0x5390, 0x5370, 0x53B1, 0x5390, 0x5BD1, 
	0x5BD1, 0x3AAC, 0x3ACC, 0x42ED, 0x3ACD, 0x3ACD, 0x430E, 0x42ED, 0x432E, 0x430E, 0x430D, 0x432E, 0x430E, 0x4B2E, 0x430E, 0x4B4F, 
	0x4B4F, 0x4B2E, 0x326B, 0x326B, 0x326B, 0x3AAC, 0x328B, 0x3AAC, 0x328B, 0x3AAC, 0x3ACC, 0x21A7, 0x3ACD, 0x3AAC, 0x3AED, 0x3ACC, 
	0x21A7, 0x42ED, 0x42ED, 0x2A09, 0x2A09, 0x2A4A, 0x2A4A, 0x324A, 0x2A4A, 0x326A, 0x328B, 0x326B, 0x21C8, 0x328B, 0x326B, 0x328B, 
	0x328B, 0x21C8, 0x3AAC, 0x21A7, 0x21A7, 0x21E9, 0x21E8, 0x2209, 0x2A29, 0x21E8, 0x21E8, 0x2A09, 0x21E9, 0x2A29, 0x2A09, 0x21E8, 
	0x2A4A, 0x2A2A, 0x2A09, 0x2A4A, 0x21C8, 0x2A2A, 0x21C8, 0x324A, 0x21C8, 0x21C7, 0x21A7, 0x21A7, 0x2A09, 0x21E8, 0x21E8, 0x2A09, 
	0x2209, 0x21E8, 0x2A29, 0x2A29, 0x2A29, 0x21C8, 0x21C8, 0x0000, 
};

const u8 Grass4Img[1104] __attribute__ ((aligned(4))) = {
	0xFF, 0x07, 0xFF, 0x07, 0xB9, 0x07, 0xFF, 0x07, 0xFF, 0x07, 0xB9, 0x07, 0xFF, 0x07, 0xFF, 0x07, 
	0xB9, 0x07, 0xFF, 0x04, 0xFF, 0x04, 0xB9, 0x04, 0xFF, 0x04, 0xFF, 0x04, 0xB9, 0x04, 0xFF, 0x1F, 
	0xFF, 0x1F, 0xB9, 0x1F, 0xFF, 0x08, 0xFF, 0x08, 0xB9, 0x08, 0xFF, 0x01, 0xFF, 0x01, 0xB9, 0x01, 
	0xFF, 0x20, 0xFF, 0x20, 0xB9, 0x20, 0xFF, 0x02, 0xFF, 0x02, 0xB9, 0x02, 0xFF, 0x1D, 0xFF, 0x1D, 
	0xB9, 0x1D, 0xFF, 0x09, 0xFF, 0x09, 0xB9, 0x09, 0xFF, 0x18, 0xFF, 0x18, 0xB9, 0x18, 0xFF, 0x05, 
	0xFF, 0x05, 0xB9, 0x05, 0xFF, 0x19, 0xFF, 0x19, 0xB9, 0x19, 0xFF, 0x06, 0xFF, 0x06, 0xB9, 0x06, 
	0xFF, 0x15, 0xFF, 0x15, 0xB9, 0x15, 0xFF, 0x03, 0xFF, 0x03, 0xB9, 0x03, 0xFF, 0x1E, 0xFF, 0x1E, 
	0xB9, 0x1E, 0xFF, 0x00, 0xFF, 0x00, 0xB9, 0x00, 0xFF, 0x1A, 0xFF, 0x1A, 0xB9, 0x1A, 0xFF, 0x1B, 
	0xFF, 0x1B, 0xB9, 0x1B, 0xFF, 0x1B, 0xFF, 0x1B, 0xB9, 0x1B, 0xFF, 0x16, 0xFF, 0x16, 0xB9, 0x16, 
	0xFF, 0x1C, 0xFF, 0x1C, 0xB9, 0x1C, 0xFF, 0x0F, 0xFF, 0x0F, 0xB9, 0x0F, 0xFF, 0x10, 0xFF, 0x10, 
	0xB9, 0x10, 0xFF, 0x17, 0xFF, 0x17, 0xB9, 0x17, 0xFF, 0x12, 0xFF, 0x12, 0xB9, 0x12, 0xFF, 0x11, 
	0xFF, 0x11, 0xB9, 0x11, 0xFF, 0x0D, 0xFF, 0x0D, 0xB9, 0x0D, 0xFF, 0x13, 0xFF, 0x13, 0xB9, 0x13, 
	0xFF, 0x14, 0xFF, 0x14, 0xB9, 0x14, 0xFF, 0x2F, 0xFF, 0x2F, 0xB9, 0x2F, 0xFF, 0x0E, 0xFF, 0x0E, 
	0xB9, 0x0E, 0xFF, 0x0B, 0xFF, 0x0B, 0xB9, 0x0B, 0xFF, 0x30, 0xFF, 0x30, 0xB9, 0x30, 0xFF, 0x31, 
	0xFF, 0x31, 0xB9, 0x31, 0xFF, 0x2D, 0xFF, 0x2D, 0xB9, 0x2D, 0xFF, 0x0C, 0xFF, 0x0C, 0xB9, 0x0C, 
	0xFF, 0x2B, 0xFF, 0x2B, 0xB9, 0x2B, 0xFF, 0x28, 0xFF, 0x28, 0xB9, 0x28, 0xFF, 0x0A, 0xFF, 0x0A, 
	0xB9, 0x0A, 0xFF, 0x29, 0xFF, 0x29, 0xB9, 0x29, 0xFF, 0x2E, 0xFF, 0x2E, 0xB9, 0x2E, 0xFF, 0x2C, 
	0xFF, 0x2C, 0xB9, 0x2C, 0xFF, 0x26, 0xFF, 0x26, 0xB9, 0x26, 0xFF, 0x2A, 0xFF, 0x2A, 0xB9, 0x2A, 
	0xFF, 0x27, 0xFF, 0x27, 0xB9, 0x27, 0xFF, 0x23, 0xFF, 0x23, 0xB9, 0x23, 0xFF, 0x42, 0xFF, 0x42, 
	0xB9, 0x42, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x3E, 0xFF, 0x3E, 0xB9, 0x3E, 0xFF, 0x24, 
	0xFF, 0x24, 0xB9, 0x24, 0xFF, 0x3C, 0xFF, 0x3C, 0xB9, 0x3C, 0xFF, 0x25, 0xFF, 0x25, 0xB9, 0x25, 
	0xFF, 0x22, 0xFF, 0x22, 0xB9, 0x22, 0xFF, 0x3A, 0xFF, 0x3A, 0xB9, 0x3A, 0xFF, 0x3F, 0xFF, 0x3F, 
	0xB9, 0x3F, 0xFF, 0x3D, 0xFF, 0x3D, 0xB9, 0x3D, 0xFF, 0x21, 0xFF, 0x21, 0xB9, 0x21, 0xFF, 0x39, 
	0xFF, 0x39, 0xB9, 0x39, 0xFF, 0x37, 0xFF, 0x37, 0xB9, 0x37, 0xFF, 0x35, 0xFF, 0x35, 0xB9, 0x35, 
	0xFF, 0x52, 0xFF, 0x52, 0xB9, 0x52, 0xFF, 0x50, 0xFF, 0x50, 0xB9, 0x50, 0xFF, 0x38, 0xFF, 0x38, 
	0xB9, 0x38, 0xFF, 0x4F, 0xFF, 0x4F, 0xB9, 0x4F, 0xFF, 0x4A, 0xFF, 0x4A, 0xB9, 0x4A, 0xFF, 0x36, 
	0xFF, 0x36, 0xB9, 0x36, 0xFF, 0x4D, 0xFF, 0x4D, 0xB9, 0x4D, 0xFF, 0x34, 0xFF, 0x34, 0xB9, 0x34, 
	0xFF, 0x33, 0xFF, 0x33, 0xB9, 0x33, 0xFF, 0x4E, 0xFF, 0x4E, 0xB9, 0x4E, 0xFF, 0x4B, 0xFF, 0x4B, 
	0xB9, 0x4B, 0xFF, 0x32, 0xFF, 0x32, 0xB9, 0x32, 0xFF, 0x49, 0xFF, 0x49, 0xB9, 0x49, 0xFF, 0x47, 
	0xFF, 0x47, 0xB9, 0x47, 0xFF, 0x67, 0xFF, 0x67, 0xB9, 0x67, 0xFF, 0x45, 0xFF, 0x45, 0xB9, 0x45, 
	0xFF, 0x48, 0xFF, 0x48, 0xB9, 0x48, 0xFF, 0x63, 0xFF, 0x63, 0xB9, 0x63, 0xFF, 0x46, 0xFF, 0x46, 
	0xB9, 0x46, 0xFF, 0x60, 0xFF, 0x60, 0xB9, 0x60, 0xFF, 0x65, 0xFF, 0x65, 0xB9, 0x65, 0xFF, 0x65, 
	0xFF, 0x65, 0xB9, 0x65, 0xFF, 0x61, 0xFF, 0x61, 0xB9, 0x61, 0xFF, 0x74, 0xFF, 0x74, 0xB9, 0x74, 
	0xFF, 0x5D, 0xFF, 0x5D, 0xB9, 0x5D, 0xFF, 0x73, 0xFF, 0x73, 0xB9, 0x73, 0xFF, 0x58, 0xFF, 0x58, 
	0xB9, 0x58, 0xFF, 0x72, 0xFF, 0x72, 0xB9, 0x72, 0xFF, 0x44, 0xFF, 0x44, 0xB9, 0x44, 0xFF, 0x6F, 
	0xFF, 0x6F, 0xB9, 0x6F, 0xFF, 0x43, 0xFF, 0x43, 0xB9, 0x43, 0xFF, 0x5E, 0xFF, 0x5E, 0xB9, 0x5E, 
	0xFF, 0x6C, 0xFF, 0x6C, 0xB9, 0x6C, 0xFF, 0x5B, 0xFF, 0x5B, 0xB9, 0x5B, 0xFF, 0x5B, 0xFF, 0x5B, 
	0xB9, 0x5B, 0xFF, 0x62, 0xFF, 0x62, 0xB9, 0x62, 0xFF, 0x57, 0xFF, 0x57, 0xB9, 0x57, 0xFF, 0x70, 
	0xFF, 0x70, 0xB9, 0x70, 0xFF, 0x5C, 0xFF, 0x5C, 0xB9, 0x5C, 0xFF, 0x55, 0xFF, 0x55, 0xB9, 0x55, 
	0xFF, 0x6D, 0xFF, 0x6D, 0xB9, 0x6D, 0xFF, 0x59, 0xFF, 0x59, 0xB9, 0x59, 0xFF, 0x71, 0xFF, 0x71, 
	0xB9, 0x71, 0xFF, 0x71, 0xFF, 0x71, 0xB9, 0x71, 0xFF, 0x56, 0xFF, 0x56, 0xB9, 0x56, 0xFF, 0x6E, 
	0xFF, 0x6E, 0xB9, 0x6E, 0xFF, 0x6E, 0xFF, 0x6E, 0xB9, 0x6E, 0xFF, 0x5A, 0xFF, 0x5A, 0xB9, 0x5A, 
	0xFF, 0x5F, 0xFF, 0x5F, 0xB9, 0x5F, 0xFF, 0x5F, 0xFF, 0x5F, 0xB9, 0x5F, 0xFF, 0x5F, 0xFF, 0x5F, 
	0xB9, 0x5F, 0xFF, 0x64, 0xFF, 0x64, 0xB9, 0x64, 0xFF, 0x64, 0xFF, 0x64, 0xB9, 0x64, 0xFF, 0x64, 
	0xFF, 0x64, 0xB9, 0x64, 0xFF, 0x64, 0xFF, 0x64, 0xB9, 0x64, 0xFF, 0x75, 0xFF, 0x75, 0xB9, 0x75, 
	0xFF, 0x66, 0xFF, 0x66, 0xB9, 0x66, 0xFF, 0x66, 0xFF, 0x66, 0xB9, 0x66, 0xFF, 0x66, 0xFF, 0x66, 
	0xB9, 0x66, 0xFF, 0x76, 0xFF, 0x76, 0xB9, 0x76, 0xFF, 0x76, 0xFF, 0x76, 0xB9, 0x76, 0xFF, 0x4C, 
	0xFF, 0x4C, 0xB9, 0x4C, 0xFF, 0x4C, 0xFF, 0x4C, 0xB9, 0x4C, 0xFF, 0x4C, 0xFF, 0x4C, 0xB9, 0x4C, 
	0xFF, 0x4C, 0xFF, 0x4C, 0xB9, 0x4C, 0xFF, 0x68, 0xFF, 0x68, 0xB9, 0x68, 0xFF, 0x68, 0xFF, 0x68, 
	0xB9, 0x68, 0xFF, 0x68, 0xFF, 0x68, 0xB9, 0x68, 0xFF, 0x51, 0xFF, 0x51, 0xB9, 0x51, 0xFF, 0x51, 
	0xFF, 0x51, 0xB9, 0x51, 0xFF, 0x51, 0xFF, 0x51, 0xB9, 0x51, 0xFF, 0x69, 0xFF, 0x69, 0xB9, 0x69, 
	0xFF, 0x69, 0xFF, 0x69, 0xB9, 0x69, 0xFF, 0x69, 0xFF, 0x69, 0xB9, 0x69, 0xFF, 0x69, 0xFF, 0x69, 
	0xB9, 0x69, 0xFF, 0x69, 0xFF, 0x69, 0xB9, 0x69, 0xFF, 0x69, 0xFF, 0x69, 0xB9, 0x69, 0xFF, 0x3B, 
	0xFF, 0x3B, 0xB9, 0x3B, 0xFF, 0x3B, 0xFF, 0x3B, 0xB9, 0x3B, 0xFF, 0x3B, 0xFF, 0x3B, 0xB9, 0x3B, 
	0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 
	0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 
	0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 
	0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 
	0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x6A, 0xFF, 0x6A, 0xB9, 0x6A, 0xFF, 0x40, 
	0xFF, 0x40, 0xB9, 0x40, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 
	0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 
	0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 
	0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 
	0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 
	0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 
	0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 
	0xFF, 0x53, 0xFF, 0x53, 0xB9, 0x53, 0xFF, 0x6B, 0xFF, 0x6B, 0xB9, 0x6B, 0xFF, 0x54, 0xFF, 0x54, 
	0xB9, 0x54, 0xFF, 0x54, 0xFF, 0x54, 0xB9, 0x54, 0xFF, 0x54, 0xFF, 0x54, 0xB9, 0x54, 0xFF, 0x54, 
	0xFF, 0x54, 0xB9, 0x54, 0xFF, 0x54, 0xFF, 0x54, 0xB9, 0x54, 0xFF, 0x54, 0xFF, 0x54, 0xB9, 0x54, 
};
