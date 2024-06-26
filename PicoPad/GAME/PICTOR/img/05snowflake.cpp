#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 30 pixels
// image height: 33 lines
// image pitch: 30 bytes
const u16 SnowflakeImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0xFFDF, 0xEF7E, 0xE75E, 0xEF9F, 0xEF7F, 0xF7DF, 0xCEDD, 0xDF5E, 0xE77F, 0xE75E, 0xEF9F, 0xEFBF, 0xEF9F, 0xD73E, 0xD71E, 
	0xDF3E, 0xDF5E, 0xE77E, 0xE75E, 0xF7BF, 0xF7BF, 0xFFFF, 0xD71D, 0xDF5E, 0xDF3E, 0xC6DD, 0xCF1E, 0xCF1E, 0xCEFD, 0xDF5E, 0xDF5E, 
	0xDF3E, 0xD6FC, 0xDF5E, 0xE77F, 0xE79F, 0xEF9E, 0x9E1B, 0xAE5C, 0xB6BD, 0xB6BD, 0xB69D, 0xB67C, 0xBEDD, 0xC6DD, 0xCF1E, 0xCEFD, 
	0xC6DD, 0xCEFD, 0xD73E, 0xEFBF, 0xF7BF, 0xEF9E, 0xF7BF, 0x8DFB, 0x961B, 0x9E1B, 0x9DFB, 0x9E3B, 0xA63C, 0xAE5C, 0xB6BD, 0xB69D, 
	0xB69C, 0xAE7C, 0xB69C, 0xB67C, 0xB69C, 0xB69C, 0xBEDD, 0xBEDD, 0xC6FE, 0xBEBD, 0xBEBC, 0xC6FD, 0xC6DD, 0xC6BC, 0xCEFD, 0xD73E, 
	0xD73E, 0xD73E, 0xDF5E, 0x6D7A, 0x6D39, 0x757A, 0x7DBA, 0x7D9A, 0x85DB, 0x7DBB, 0x7D9A, 0x8DDB, 0x961B, 0x961C, 0x9E3C, 0x9E3C, 
	0xA67C, 0xA65C, 0xA65C, 0xAE9D, 0xAE7C, 0xAE7C, 0xAE9C, 0xAE7C, 0xB6BD, 0xBEDD, 0xB69C, 0xC6FD, 0xBEDD, 0xC6DD, 0xC6FD, 0xD75E, 
	0xD75E, 0xD73E, 0xDF7E, 0x5519, 0x5D19, 0x54F8, 0x5D19, 0x6559, 0x6539, 0x655A, 0x6539, 0x6D5A, 0x6539, 0x6D7A, 0x6D59, 0x759A, 
	0x757A, 0x759A, 0x75BB, 0x759A, 0x759A, 0x757A, 0x759A, 0x759A, 0x759A, 0x7579, 0x7DBA, 0x7DBA, 0x85DA, 0x85FB, 0x85BA, 0x85DB, 
	0x85BA, 0x8DFB, 0x85DA, 0x8DDA, 0x961B, 0x963B, 0x9E3B, 0x9E5C, 0x9E5C, 0xAE9C, 0xB6BD, 0xB69C, 0xBEDD, 0xBEDD, 0xD73E, 0xE77E, 
	0xEFDF, 0xF7DF, 0xF7BF, 0x3C97, 0x3C97, 0x3CB8, 0x3CB8, 0x3CB8, 0x3CB8, 0x44D8, 0x44B8, 0x44B8, 0x44B8, 0x44D8, 0x44D8, 0x44D8, 
	0x44D8, 0x44D8, 0x44D8, 0x4CF8, 0x4CD8, 0x4CD8, 0x4CF8, 0x4CF9, 0x4CF8, 0x4CD8, 0x4CD8, 0x4CF8, 0x54F9, 0x5519, 0x5519, 0x54F8, 
	0x4CD8, 0x54D8, 0x5519, 0x5519, 0x5519, 0x5519, 0x5519, 0x5518, 0x5D39, 0x5D39, 0x5D19, 0x5D39, 0x5D59, 0x5D18, 0x6539, 0x6539, 
	0x6539, 0x6559, 0x6D59, 0x6D79, 0x759A, 0x759A, 0x759A, 0x759A, 0x75BA, 0x7579, 0x7DDB, 0x7DDA, 0x7DBA, 0x7DBA, 0x8E1B, 0x961B, 
	0xA67C, 0xA67C, 0xA63B, 0xAE9D, 0xAE7C, 0xBEFD, 0xDF7E, 0xFFFF, 0x3497, 0x3477, 0x3497, 0x3477, 0x3497, 0x3477, 0x3497, 0x3497, 
	0x3497, 0x3497, 0x3497, 0x3C97, 0x3CB8, 0x3C97, 0x3CB7, 0x3CB8, 0x3CB7, 0x44B7, 0x44D8, 0x44D8, 0x44D8, 0x4CD8, 0x4CF8, 0xFFFF, 
};

const u8 SnowflakeImg[990] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xB4, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDE, 0x62, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8A, 0x16, 0xFF, 0x8F, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xA8, 0x88, 0xEE, 0xAE, 0x23, 0x23, 0xAE, 0xF8, 0xC8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xB3, 0xE7, 0xE6, 0x7D, 0x6B, 0x9C, 0xD8, 0x33, 0x68, 0x00, 0xEB, 0xE9, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x5F, 
	0xC6, 0x14, 0x5D, 0x14, 0x06, 0x16, 0x72, 0x99, 0x48, 0xBE, 0xE4, 0xEC, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x16, 0x14, 
	0xF4, 0xAE, 0x1B, 0x69, 0xA3, 0x83, 0x0D, 0xE7, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC5, 0xAE, 0x08, 0x0D, 0xF7, 0x00, 
	0x3E, 0x97, 0x00, 0x79, 0x0C, 0x2C, 0xEC, 0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0xEE, 0xA7, 0x29, 0x46, 0xAA, 0x3E, 0x97, 
	0xC2, 0x50, 0x5D, 0xEF, 0xC8, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xB4, 0xAF, 0x00, 0xD5, 0xB0, 0x06, 0xCB, 0x00, 0xEE, 0x58, 0x24, 0x72, 0x23, 0x24, 0x7B, 
	0x00, 0x00, 0xE3, 0x8D, 0xAD, 0xEC, 0x00, 0xFA, 0x00, 0x00, 0x00, 0x00, 0xEB, 0xD3, 0x8B, 0x8A, 
	0x9B, 0x00, 0x7F, 0x9A, 0x0C, 0x5E, 0x00, 0x00, 0x00, 0xBC, 0x50, 0x6D, 0xAF, 0x00, 0x00, 0xF7, 
	0x14, 0x5C, 0xE0, 0x00, 0xB4, 0xA1, 0xA7, 0xCA, 0xEF, 0x00, 0x00, 0x64, 0x01, 0x68, 0xFF, 0xAE, 
	0xAC, 0x6F, 0xBD, 0x1F, 0xE8, 0x00, 0x00, 0x00, 0x97, 0xD4, 0x00, 0x00, 0x00, 0xD4, 0x6B, 0xDA, 
	0x58, 0x00, 0x95, 0xE5, 0xE0, 0x01, 0x8F, 0x00, 0x00, 0xC4, 0x5E, 0x9F, 0x15, 0x36, 0x98, 0x1F, 
	0xB7, 0x48, 0xBC, 0x00, 0x00, 0x00, 0x60, 0x79, 0x00, 0x00, 0x00, 0x69, 0xCC, 0x99, 0x8A, 0xE4, 
	0x01, 0x06, 0x64, 0x5E, 0x00, 0x00, 0x00, 0x00, 0x4B, 0x4C, 0x80, 0x8B, 0x17, 0x15, 0x6E, 0x99, 
	0x8F, 0x00, 0x00, 0x00, 0x63, 0xC8, 0x00, 0x00, 0xAD, 0x24, 0xDB, 0x01, 0x35, 0x4A, 0x8E, 0x6D, 
	0x71, 0xA5, 0x00, 0x00, 0x00, 0x00, 0xA5, 0xEB, 0x00, 0xC9, 0x67, 0x37, 0x18, 0x35, 0x9F, 0xCA, 
	0xEB, 0xFB, 0x48, 0x82, 0xEC, 0xF8, 0xE1, 0x15, 0x25, 0x3B, 0x6D, 0xC3, 0x00, 0x00, 0xB5, 0xEB, 
	0x00, 0x00, 0x00, 0x00, 0xEB, 0xCE, 0x6C, 0x66, 0xDC, 0x32, 0x62, 0xC7, 0x78, 0x4C, 0x4F, 0xA0, 
	0xFF, 0xFF, 0x6F, 0x32, 0x90, 0x74, 0x27, 0x46, 0x7F, 0x63, 0x65, 0xB2, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xA3, 0x86, 0x5B, 0x39, 0x37, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x53, 0x05, 0x35, 0x25, 
	0x6B, 0xEE, 0x00, 0x00, 0x00, 0xBC, 0x3C, 0x1A, 0x62, 0x91, 0xEE, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xF5, 0xCF, 0xDF, 0x94, 0xF9, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x03, 0x21, 0x17, 0x28, 0xEB, 
	0x00, 0x00, 0x00, 0xF3, 0xDD, 0x95, 0x93, 0xD7, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF1, 0x3F, 
	0x04, 0x3F, 0x59, 0x1F, 0x61, 0xFD, 0xFE, 0xE2, 0x1D, 0x37, 0x07, 0x49, 0x26, 0x68, 0xCA, 0xF6, 
	0x8C, 0x1E, 0x94, 0x2F, 0x42, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x38, 
	0x67, 0x8A, 0x33, 0x36, 0x13, 0xD9, 0xF0, 0x00, 0x37, 0xC3, 0x00, 0x73, 0x4D, 0xA2, 0x14, 0x8C, 
	0x65, 0x76, 0xEC, 0xD3, 0xBF, 0x00, 0x00, 0x00, 0x00, 0xEA, 0x94, 0xD2, 0xFA, 0xD9, 0x22, 0x35, 
	0x49, 0x65, 0xDE, 0x00, 0x00, 0x00, 0x3A, 0xC9, 0x00, 0x00, 0xA9, 0x19, 0x30, 0x15, 0x51, 0x90, 
	0x9E, 0x2C, 0xB9, 0x00, 0x00, 0x00, 0x00, 0xB6, 0x60, 0x01, 0x01, 0x18, 0x92, 0x41, 0xB8, 0x47, 
	0xB6, 0x00, 0x00, 0x00, 0x62, 0xD1, 0x00, 0x00, 0x00, 0x2A, 0xB4, 0x43, 0x6A, 0x34, 0x4F, 0x90, 
	0x62, 0xEE, 0x00, 0x00, 0x00, 0x9D, 0x15, 0x1D, 0x19, 0xCB, 0xF1, 0x45, 0xD1, 0x47, 0x00, 0x00, 
	0x00, 0xFC, 0x4E, 0x96, 0xEE, 0x00, 0x00, 0x55, 0x61, 0x56, 0xBA, 0xCB, 0x12, 0x36, 0xE4, 0xCD, 
	0x00, 0x00, 0xB2, 0x84, 0x3D, 0xBB, 0x11, 0xA3, 0x7D, 0x91, 0x0B, 0x7D, 0x00, 0xF2, 0x93, 0x1E, 
	0x20, 0x03, 0x1C, 0x76, 0x00, 0xA6, 0x09, 0x38, 0x5A, 0xEC, 0x0E, 0x2B, 0x02, 0x9E, 0xEC, 0x00, 
	0x00, 0x00, 0x00, 0xA3, 0x7B, 0x00, 0xAF, 0xFA, 0x1C, 0xEE, 0xC7, 0x70, 0x5F, 0xA8, 0x4C, 0x5C, 
	0x77, 0x2E, 0x5F, 0xF3, 0x3B, 0xD6, 0x54, 0x00, 0x5C, 0x87, 0x57, 0x85, 0xF5, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x7E, 0xC0, 0x0C, 0x12, 0xB6, 0x00, 0x44, 0x96, 0x00, 0x79, 
	0x05, 0x43, 0xBA, 0x80, 0x00, 0x00, 0xEE, 0xEB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xEB, 0x40, 0x0F, 0x22, 0xB1, 0xD0, 0x10, 0x2E, 0xB8, 0x81, 0x10, 0x09, 
	0x75, 0xEE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xB6, 0x38, 0xF6, 0x10, 0x6D, 0x52, 0x20, 0x08, 0x24, 0x2D, 0x37, 0x77, 0x41, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xEC, 0x00, 0x00, 0x0A, 0x93, 0xA4, 0x30, 0x5F, 0x73, 0x2F, 0x8C, 0x00, 0xA3, 0xEC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xFD, 0x00, 0x89, 0x13, 0x03, 0x7C, 0xF0, 0xAB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xB2, 0x31, 0x30, 0xAB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7A, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xED, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
