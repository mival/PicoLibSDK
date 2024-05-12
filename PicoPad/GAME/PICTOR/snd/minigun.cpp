#include "include.h"

// sound format: Intel IMA ADPCM mono 4-bit 22050Hz
const u16 MinigunSnd_SampBlock = 1017; // number of samples per block

const u8 MinigunSnd[2464] = {
	0x00, 0xFE, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xBF, 0xCB, 0xEA, 0xBA, 0x08, 0x34, 0x34, 0x46, 0x54, 
	0x34, 0x11, 0x80, 0x80, 0x99, 0xCA, 0xBB, 0xCC, 0xCC, 0xBD, 0x8A, 0x89, 0x10, 0x20, 0x32, 0x35, 
	0x45, 0x33, 0x22, 0x80, 0xA8, 0xAA, 0xCB, 0xA8, 0x80, 0x80, 0x33, 0x23, 0x98, 0xD9, 0xCD, 0xCB, 
	0xCD, 0xCA, 0xBA, 0xAA, 0xAB, 0x09, 0x18, 0x53, 0x63, 0x53, 0x53, 0x33, 0x22, 0x10, 0x98, 0xB9, 
	0xCC, 0xBC, 0xBC, 0xBC, 0x9B, 0x08, 0x21, 0x53, 0x44, 0x24, 0x22, 0x13, 0x02, 0x80, 0x98, 0xBA, 
	0xCC, 0xBC, 0xBD, 0xCB, 0xAC, 0x99, 0x98, 0x10, 0x43, 0x35, 0x34, 0x22, 0x22, 0x90, 0xA9, 0xCB, 
	0xBC, 0xCB, 0x89, 0x30, 0x41, 0x43, 0x31, 0x11, 0x24, 0x45, 0x01, 0xA8, 0xB9, 0xCC, 0xCE, 0x9A, 
	0xA9, 0x89, 0xA9, 0xAB, 0x09, 0x30, 0x43, 0x42, 0x73, 0x44, 0x23, 0x21, 0x53, 0x33, 0x22, 0x80, 
	0xBA, 0xAD, 0xB9, 0xDB, 0xCC, 0xAB, 0xA9, 0xBB, 0x9B, 0x01, 0xC0, 0x9B, 0x41, 0x14, 0x12, 0x50, 
	0x45, 0x02, 0x81, 0x09, 0x32, 0x88, 0x89, 0xBE, 0x99, 0x9B, 0x66, 0x82, 0x72, 0x15, 0x08, 0x88, 
	0x10, 0xB8, 0x1B, 0xA1, 0xAF, 0xEA, 0x9C, 0xA8, 0x9B, 0x01, 0x08, 0x35, 0x11, 0x03, 0x9C, 0x63, 
	0xA8, 0x40, 0x81, 0xAB, 0xAB, 0x45, 0xA0, 0x70, 0x16, 0x00, 0x80, 0x89, 0x81, 0xBC, 0x10, 0xA9, 
	0x99, 0x99, 0x72, 0xA8, 0x38, 0x93, 0x2D, 0x94, 0x9C, 0x98, 0x0B, 0x14, 0xBB, 0x70, 0xA1, 0x9A, 
	0xC8, 0x3A, 0x05, 0xAB, 0x53, 0x90, 0x18, 0xB9, 0x63, 0xE8, 0x09, 0x92, 0x9A, 0x13, 0xCB, 0x32, 
	0xDB, 0x30, 0xC1, 0x3A, 0x15, 0x0B, 0x03, 0x0C, 0x44, 0xB8, 0x2A, 0x05, 0xAA, 0xB8, 0x3B, 0x37, 
	0xA9, 0x62, 0x82, 0x0A, 0xB1, 0x3B, 0x05, 0xAC, 0x41, 0xA0, 0x3A, 0x94, 0x0C, 0x92, 0xAE, 0x22, 
	0xC8, 0x1B, 0x05, 0x9A, 0x00, 0x09, 0x36, 0xA9, 0x59, 0x14, 0x99, 0x00, 0xAA, 0x72, 0xB0, 0x0B, 
	0x03, 0xCB, 0x10, 0xCC, 0x20, 0xC0, 0x8B, 0x25, 0xBA, 0x50, 0xA1, 0x0B, 0x92, 0x8D, 0x24, 0xBA, 
	0x58, 0x14, 0xAA, 0x12, 0xCB, 0x52, 0x92, 0x8C, 0x33, 0xC8, 0x19, 0xC0, 0x3A, 0x04, 0xBD, 0x40, 
	0x92, 0x0C, 0x13, 0xCB, 0x40, 0xC0, 0x29, 0x04, 0xAB, 0x51, 0xA2, 0x0B, 0x14, 0xCB, 0x41, 0x92, 
	0x0C, 0x33, 0xD9, 0x0B, 0xB0, 0x1D, 0x03, 0xAC, 0x58, 0x03, 0xBB, 0x53, 0xB9, 0x3A, 0x84, 0x9B, 
	0x45, 0xB9, 0x3A, 0x16, 0xAA, 0x21, 0xB8, 0x49, 0x25, 0xC9, 0x38, 0x04, 0xAB, 0x88, 0xCB, 0x61, 
	0xA2, 0x9C, 0x41, 0x81, 0x9B, 0x81, 0xDC, 0x40, 0x92, 0x8B, 0x21, 0xA8, 0x2B, 0x85, 0xAD, 0x42, 
	0xB0, 0x29, 0x35, 0xC0, 0x2B, 0x15, 0xBA, 0x18, 0xCB, 0x38, 0x83, 0xB9, 0x68, 0x15, 0xBB, 0x10, 
	0xDA, 0x09, 0x33, 0xB1, 0x3A, 0x27, 0xC9, 0x19, 0xC8, 0x48, 0x05, 0xBA, 0x20, 0x25, 0xA9, 0x19, 
	0x82, 0xAE, 0x31, 0xC8, 0x28, 0xB2, 0x9A, 0x41, 0x25, 0xC8, 0x1A, 0xC1, 0x8B, 0x55, 0xA0, 0x8A, 
	0x23, 0xB0, 0x8A, 0xC8, 0x0B, 0x35, 0xB1, 0x8C, 0x73, 0x83, 0xAD, 0x28, 0xB1, 0x1A, 0x16, 0xBA, 
	0x38, 0x92, 0x8C, 0x24, 0xB0, 0x8C, 0x32, 0xC8, 0x0A, 0x64, 0xB1, 0x8C, 0x42, 0xA1, 0x8D, 0x81, 
	0x9C, 0x33, 0xB0, 0x1C, 0x44, 0x81, 0xAA, 0x19, 0xB0, 0x0B, 0x35, 0xB3, 0x9D, 0x21, 0x80, 0xDC, 
	0x20, 0xC9, 0x48, 0x13, 0xCA, 0x78, 0x04, 0xA9, 0x19, 0x13, 0xDB, 0x18, 0x98, 0x99, 0x22, 0xE0, 
	0x39, 0x35, 0x00, 0xBA, 0x1A, 0xCA, 0x28, 0x63, 0x83, 0x9C, 0x11, 0x89, 0xCB, 0x0A, 0xA8, 0x70, 
	0xA1, 0xBB, 0x39, 0x47, 0xA1, 0x8A, 0x31, 0xC8, 0x9C, 0x33, 0xC1, 0x1B, 0x02, 0xC9, 0x49, 0xA4, 
	0x00, 0xEE, 0x3F, 0x00, 0x61, 0x82, 0x99, 0x50, 0x92, 0x9A, 0xC9, 0x9C, 0x53, 0x92, 0xAE, 0x31, 
	0x91, 0x9A, 0x19, 0x41, 0x27, 0xB9, 0x1A, 0x23, 0xEC, 0x1A, 0x12, 0x09, 0x13, 0xA9, 0x49, 0x83, 
	0xAE, 0x48, 0xA2, 0xAE, 0x10, 0x80, 0x41, 0x04, 0xAB, 0x50, 0x13, 0xCB, 0x0A, 0xB8, 0x30, 0xC2, 
	0x9C, 0x72, 0x84, 0xAB, 0x20, 0xB8, 0x0B, 0x44, 0xB8, 0x28, 0x92, 0xAB, 0x71, 0xD2, 0x0C, 0x23, 
	0x98, 0x20, 0x14, 0xCB, 0x40, 0x83, 0xBD, 0x09, 0xB9, 0x39, 0x15, 0xAA, 0x50, 0x14, 0xB9, 0x48, 
	0x92, 0x8D, 0x42, 0xC8, 0x9C, 0x21, 0x91, 0x28, 0x93, 0xAC, 0x63, 0xB0, 0x8C, 0x51, 0xB0, 0x8C, 
	0x22, 0x91, 0x0B, 0x04, 0xAB, 0x54, 0x90, 0x99, 0x53, 0xA2, 0xAD, 0x10, 0xB9, 0x28, 0x26, 0xCA, 
	0x1B, 0x14, 0xA8, 0x89, 0x81, 0x18, 0x47, 0xB0, 0x8C, 0x23, 0xC8, 0x9C, 0x42, 0xA0, 0x28, 0x13, 
	0xBA, 0x19, 0x83, 0xAE, 0x42, 0xB1, 0xAF, 0x18, 0x00, 0x28, 0x27, 0xB8, 0x2A, 0x24, 0x88, 0x9A, 
	0xB8, 0x9C, 0x22, 0xC8, 0x0D, 0x73, 0x01, 0x9A, 0x10, 0xA8, 0x0B, 0x24, 0xA8, 0xAB, 0x31, 0xFA, 
	0x49, 0x03, 0xAB, 0x19, 0x43, 0xB0, 0x70, 0x86, 0xAA, 0x20, 0x03, 0xCC, 0x09, 0xA1, 0xBB, 0x11, 
	0xA8, 0x58, 0x37, 0xA1, 0x8B, 0x22, 0x98, 0x20, 0x25, 0xDA, 0xAC, 0x08, 0xB8, 0x48, 0x13, 0x20, 
	0x42, 0xA2, 0xDB, 0x48, 0x04, 0xDC, 0x19, 0x91, 0xCB, 0x38, 0x04, 0x08, 0x02, 0x98, 0x30, 0x65, 
	0x83, 0xCB, 0x09, 0xB8, 0xAC, 0x40, 0x84, 0xAB, 0x31, 0x15, 0xBB, 0x29, 0xA8, 0x2A, 0x45, 0xC8, 
	0x0B, 0x36, 0xA1, 0x8C, 0x08, 0xA8, 0xAB, 0x74, 0x82, 0x09, 0x10, 0xA9, 0x1A, 0x44, 0x90, 0xAD, 
	0x08, 0xCA, 0x9B, 0x53, 0x03, 0x9A, 0x63, 0x82, 0x9B, 0x20, 0x21, 0x88, 0x11, 0xDE, 0xAD, 0x30, 
	0x03, 0x9A, 0x21, 0x25, 0xC9, 0x30, 0x04, 0xC9, 0x0A, 0xA0, 0xAC, 0x0A, 0x90, 0x8E, 0x73, 0x01, 
	0x90, 0x08, 0x24, 0x80, 0x29, 0x25, 0xEA, 0x8A, 0x00, 0xBA, 0x09, 0x82, 0xD9, 0x3A, 0x37, 0xA0, 
	0x8B, 0x11, 0xA0, 0x0C, 0x65, 0x81, 0x9A, 0x18, 0x81, 0xCB, 0x9C, 0x90, 0x9B, 0x67, 0x01, 0x98, 
	0x18, 0x22, 0xB9, 0x8B, 0x15, 0xC9, 0xAC, 0x10, 0xA9, 0x9C, 0x42, 0x02, 0x28, 0x35, 0xB1, 0x8A, 
	0x53, 0x83, 0xBC, 0x30, 0xB1, 0xEF, 0x19, 0x22, 0x80, 0x0A, 0x12, 0x98, 0x89, 0x33, 0xC8, 0x9D, 
	0x20, 0x04, 0xDB, 0x88, 0x08, 0x88, 0x32, 0x40, 0x35, 0x21, 0xCA, 0x39, 0x15, 0xC2, 0xCF, 0x18, 
	0x22, 0xA8, 0x9B, 0x21, 0xA2, 0xBD, 0x19, 0x12, 0x88, 0x70, 0x45, 0x83, 0xDB, 0x8A, 0x00, 0x90, 
	0xAA, 0x45, 0x11, 0xC9, 0x9C, 0x12, 0x02, 0xA9, 0x10, 0x43, 0x91, 0x8C, 0x22, 0x98, 0xBF, 0x48, 
	0x36, 0x91, 0xFB, 0x89, 0x88, 0xA9, 0x1A, 0x54, 0x22, 0x90, 0x89, 0x01, 0xA8, 0x9B, 0x30, 0x34, 
	0xB1, 0x3C, 0x92, 0xF9, 0xBE, 0x2A, 0x14, 0x81, 0x89, 0x52, 0x14, 0xB8, 0xBB, 0x30, 0x13, 0xA9, 
	0x1A, 0x03, 0xFC, 0xBC, 0x10, 0x23, 0xB0, 0x8D, 0x43, 0x12, 0xC8, 0x2A, 0x35, 0x81, 0xCA, 0x40, 
	0x34, 0x91, 0xCD, 0x9B, 0xA9, 0x99, 0x49, 0x34, 0x02, 0xCB, 0x39, 0x26, 0x92, 0xCB, 0x19, 0x24, 
	0x82, 0xAB, 0x22, 0x13, 0xFC, 0xAD, 0x00, 0x01, 0x91, 0x19, 0x02, 0x90, 0xAF, 0x30, 0x33, 0x13, 
	0x0B, 0x47, 0x02, 0xD8, 0xAC, 0x11, 0x12, 0xA0, 0xAB, 0x12, 0xA0, 0xEF, 0x8A, 0x00, 0x08, 0x18, 
	0x56, 0x23, 0x91, 0xBB, 0x89, 0x88, 0xB8, 0x2C, 0x26, 0x13, 0xC9, 0xAD, 0x00, 0xA0, 0xB8, 0x8B, 
	0x53, 0x13, 0x10, 0x43, 0x11, 0xEA, 0x9C, 0x63, 0x22, 0xA1, 0xBB, 0x89, 0xDA, 0xCC, 0x8B, 0x43, 
	0x00, 0xF8, 0x3C, 0x00, 0x22, 0xA8, 0x21, 0x82, 0xBA, 0x8D, 0x31, 0x33, 0xB8, 0x68, 0x15, 0xA0, 
	0xCF, 0x8A, 0x10, 0x00, 0x98, 0x40, 0x26, 0x80, 0xC9, 0x0A, 0x01, 0x81, 0xA0, 0x32, 0x32, 0xDB, 
	0x8D, 0x21, 0x00, 0xEC, 0x8B, 0x22, 0x22, 0xA8, 0x1C, 0x34, 0x81, 0xD8, 0x0A, 0x46, 0x12, 0x88, 
	0xAB, 0xAA, 0xCC, 0xB9, 0x58, 0x13, 0x02, 0x9C, 0x20, 0x05, 0xA0, 0xCD, 0x0A, 0x21, 0x22, 0x00, 
	0x72, 0x04, 0x80, 0xDB, 0x99, 0x88, 0x91, 0x88, 0x42, 0x91, 0xCA, 0x9E, 0x28, 0x02, 0x82, 0x8A, 
	0x57, 0x12, 0x90, 0xBB, 0x18, 0x22, 0x88, 0x9E, 0x20, 0x83, 0xC0, 0xEC, 0x99, 0x9A, 0xBB, 0x39, 
	0x57, 0x32, 0x82, 0x8A, 0x08, 0x9A, 0x98, 0x9C, 0x72, 0x02, 0x82, 0xCB, 0x18, 0x99, 0xBA, 0xBE, 
	0x09, 0x82, 0x23, 0x31, 0x55, 0x81, 0xAA, 0xCB, 0x63, 0x14, 0x02, 0xB9, 0x89, 0xB8, 0xAE, 0xBD, 
	0x29, 0x04, 0x32, 0x88, 0x31, 0x14, 0x80, 0xBC, 0x8C, 0x00, 0x80, 0xA0, 0x72, 0x27, 0x88, 0xDB, 
	0x8A, 0x01, 0x18, 0xB9, 0x39, 0x45, 0x82, 0xAA, 0xBC, 0x21, 0x82, 0x80, 0x09, 0x73, 0x81, 0xA0, 
	0x8C, 0xB3, 0xA0, 0xEB, 0x0A, 0x42, 0x42, 0x11, 0xC9, 0x32, 0xA1, 0x08, 0xCD, 0x51, 0x13, 0x91, 
	0xC9, 0xAC, 0x99, 0x09, 0x08, 0x5C, 0x02, 0x80, 0x90, 0x9C, 0x28, 0x82, 0x32, 0x06, 0x28, 0x47, 
	0x81, 0xA9, 0xFB, 0xAA, 0x80, 0x02, 0x80, 0x21, 0x41, 0x83, 0xA9, 0xBD, 0xCB, 0x23, 0x28, 0xA8, 
	0x63, 0x47, 0x01, 0x11, 0xBB, 0xBC, 0xBB, 0xAC, 0x09, 0x81, 0x72, 0x17, 0x88, 0x88, 0x9B, 0x88, 
	0x11, 0x14, 0x00, 0x91, 0x11, 0x80, 0xAC, 0xD9, 0x8D, 0x8B, 0x9A, 0xC9, 0x33, 0x77, 0x12, 0x81, 
	0x99, 0xCB, 0x8A, 0x89, 0x18, 0x82, 0x73, 0x05, 0x00, 0xA0, 0xA9, 0x89, 0x08, 0x0A, 0xC0, 0xA9, 
	0x80, 0xA2, 0x0E, 0xAC, 0x89, 0x98, 0x0D, 0x13, 0x52, 0x47, 0x13, 0x13, 0x98, 0xD8, 0xBA, 0xCA, 
	0xAA, 0x99, 0x10, 0x27, 0x23, 0x08, 0xA9, 0x8D, 0x99, 0x80, 0x80, 0x19, 0x32, 0x02, 0x17, 0xA0, 
	0x3C, 0x82, 0x0A, 0x08, 0x9F, 0x41, 0x14, 0x83, 0x80, 0xBE, 0x9D, 0x9A, 0x08, 0x28, 0x48, 0x13, 
	0x16, 0x10, 0x31, 0xC0, 0xA0, 0xA9, 0xFA, 0x8B, 0x18, 0x10, 0x54, 0x02, 0xB9, 0x9D, 0xCA, 0x8A, 
	0x38, 0x20, 0x36, 0x15, 0x09, 0x00, 0x0B, 0x08, 0x42, 0x80, 0x80, 0xBA, 0x8B, 0x80, 0x0D, 0xF8, 
	0xBC, 0x9D, 0xBA, 0x89, 0x20, 0x67, 0x12, 0x31, 0x82, 0x98, 0x8C, 0x8B, 0x8D, 0x08, 0x98, 0x73, 
	0x02, 0x28, 0xB0, 0xFA, 0x89, 0x08, 0x88, 0x00, 0x18, 0x80, 0x80, 0xBA, 0x03, 0x8C, 0x40, 0x87, 
	0x80, 0x02, 0x55, 0x15, 0x12, 0xA1, 0xAC, 0xDD, 0x9A, 0xB9, 0x08, 0x11, 0x54, 0x14, 0x80, 0x80, 
	0x98, 0x88, 0x10, 0x51, 0xA8, 0x99, 0x0A, 0x0A, 0xCD, 0x90, 0x0A, 0xC8, 0x0A, 0x08, 0x08, 0x78, 
	0x37, 0x23, 0x80, 0xAB, 0xB9, 0x8E, 0x89, 0x80, 0x10, 0x72, 0x22, 0x15, 0x90, 0xBA, 0xEB, 0xBA, 
	0x99, 0x10, 0x81, 0x14, 0x14, 0x08, 0xAA, 0x8C, 0x3C, 0x40, 0x10, 0x26, 0x80, 0x12, 0x34, 0x83, 
	0xB9, 0xFC, 0x8A, 0x9D, 0x0A, 0x38, 0x08, 0x11, 0x62, 0x18, 0xC9, 0x99, 0x98, 0x0C, 0x23, 0x14, 
	0x14, 0x10, 0x34, 0x80, 0xAC, 0xDC, 0xAA, 0x8D, 0x09, 0x30, 0x25, 0x30, 0x32, 0x84, 0xBB, 0xA9, 
	0x8F, 0x80, 0x31, 0x14, 0x01, 0x08, 0xA8, 0x08, 0xDC, 0x9C, 0x98, 0x0A, 0x08, 0x38, 0x80, 0x80, 
	0x36, 0x08, 0xC8, 0xC8, 0xBF, 0x89, 0x02, 0x17, 0x32, 0x41, 0x31, 0x11, 0xC0, 0x9E, 0xCA, 0x89, 
	0x19, 0x41, 0x14, 0x11, 0x98, 0x9C, 0xAD, 0xC9, 0x08, 0x31, 0x11, 0x22, 0x05, 0xC8, 0x80, 0x40, 
	0x00, 0x00, 0x2C, 0x00, 0x82, 0x80, 0xA8, 0xF8, 0x98, 0xAA, 0x08, 0x83, 0x34, 0x17, 0x01, 0x28, 
	0x00, 0xCB, 0xAF, 0xA9, 0x9C, 0x19, 0x16, 0x42, 0x11, 0x01, 0x9A, 0xA9, 0x9D, 0x89, 0x22, 0x15, 
	0x22, 0x08, 0xB8, 0xCB, 0xAF, 0x98, 0x80, 0x80, 0x80, 0x03, 0x58, 0x08, 0x03, 0x07, 0x83, 0x08, 
	0x80, 0xFC, 0xA9, 0xA0, 0x80, 0x30, 0x08, 0x53, 0x16, 0x22, 0x08, 0xBB, 0xFB, 0x8B, 0x0A, 0x08, 
	0x73, 0x33, 0x12, 0x85, 0x9D, 0xCA, 0xBB, 0x99, 0x28, 0x42, 0x42, 0x15, 0x11, 0x98, 0x08, 0x8A, 
	0x8A, 0x80, 0x40, 0x80, 0x80, 0x80, 0x8E, 0xAF, 0xAA, 0xEA, 0x99, 0x88, 0x23, 0x45, 0x21, 0x23, 
	0x22, 0x30, 0x78, 0x80, 0x20, 0xDB, 0x9A, 0xED, 0xAA, 0x09, 0x88, 0x12, 0x16, 0x10, 0x30, 0x0C, 
	0xA9, 0x80, 0x20, 0x63, 0x23, 0x51, 0x01, 0x0A, 0xBD, 0xA9, 0x9E, 0x99, 0x9B, 0x28, 0x15, 0x21, 
	0x42, 0x22, 0x8A, 0x0B, 0x9F, 0x9A, 0x28, 0x23, 0x27, 0x82, 0xA0, 0xBA, 0xAD, 0xA0, 0x8A, 0x80, 
	0x30, 0x00, 0x85, 0x00, 0x58, 0x70, 0x22, 0x82, 0x03, 0x0C, 0xBB, 0xEC, 0x89, 0x0A, 0x0B, 0x08, 
	0x80, 0x58, 0x30, 0x74, 0x80, 0x82, 0xB0, 0x30, 0x0C, 0x83, 0x84, 0x03, 0x40, 0xBC, 0xEE, 0xCA, 
	0x99, 0x88, 0x10, 0x23, 0x26, 0x14, 0x10, 0x80, 0xA0, 0x80, 0xB0, 0x08, 0x80, 0x80, 0x08, 0x08, 
	0x80, 0xF8, 0xCF, 0xAA, 0xDA, 0x89, 0x20, 0x15, 0x22, 0x52, 0x01, 0x01, 0x8A, 0x80, 0x80, 0x85, 
	0x80, 0xB4, 0xC0, 0xFC, 0x98, 0xA9, 0x80, 0x80, 0x83, 0x80, 0xD0, 0x30, 0x08, 0x44, 0x63, 0x22, 
	0x22, 0x78, 0x08, 0x28, 0xCA, 0xCA, 0xE9, 0xA9, 0x8A, 0x09, 0x41, 0x12, 0x44, 0x81, 0x80, 0xCA, 
	0x0A, 0x08, 0x08, 0x73, 0x14, 0x28, 0x08, 0xAB, 0xBA, 0xBF, 0xA9, 0x80, 0x80, 0x30, 0x03, 0x44, 
	0x86, 0x20, 0x08, 0x0B, 0x8F, 0xA0, 0x80, 0x83, 0x70, 0x01, 0x88, 0x00, 0xEB, 0x98, 0x08, 0x08, 
	0x83, 0x80, 0x70, 0x81, 0x8D, 0x80, 0x50, 0x80, 0x32, 0x08, 0x08, 0x8C, 0xFB, 0xAA, 0x8A, 0x80, 
	0x80, 0x04, 0x48, 0x08, 0x84, 0x70, 0x00, 0x08, 0x08, 0x08, 0x3F, 0x28, 0x20, 0x03, 0x08, 0xD8, 
	0xBF, 0xCB, 0x9C, 0x08, 0x28, 0x42, 0x34, 0x23, 0x21, 0x83, 0x80, 0x8B, 0xD0, 0x8B, 0x0C, 0x88, 
	0x00, 0x88, 0x00, 0x07, 0x8C, 0x9F, 0xAA, 0x9F, 0x80, 0x80, 0x62, 0x10, 0x14, 0x00, 0x98, 0xA0, 
	0xD0, 0xA0, 0x80, 0x80, 0x83, 0x70, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0xB9, 0x00, 0x88, 0x00, 
	0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x8A, 0x70, 0x70, 0x20, 0x38, 0x08, 0x08, 0x8C, 0xC0, 
	0x08, 0x08, 0x85, 0xC0, 0xF8, 0xA9, 0xA8, 0x0A, 0x38, 0x80, 0x35, 0x08, 0x08, 0x08, 0x78, 0x78, 
	0x10, 0x80, 0x08, 0xB0, 0x08, 0x48, 0x40, 0x08, 0xB4, 0x08, 0xBD, 0x9F, 0x8B, 0x0A, 0x3D, 0x20, 
	0x31, 0x72, 0x11, 0x80, 0x80, 0xA8, 0xB8, 0x80, 0x80, 0x80, 0xF0, 0x8B, 0x70, 0x00, 0x08, 0x08, 
	0xF8, 0x8A, 0xAA, 0xEA, 0x08, 0x58, 0x11, 0x62, 0x01, 0x81, 0xA0, 0xCA, 0xA8, 0x80, 0x8A, 0x30, 
	0x00, 0x58, 0x70, 0x00, 0x08, 0x08, 0x88, 0x8F, 0x0A, 0xA8, 0x08, 0x08, 0x44, 0x78, 0x21, 0x08, 
	0xA8, 0x08, 0xFB, 0x08, 0x8A, 0x20, 0x80, 0x80, 0x80, 0x8D, 0x80, 0x80, 0x70, 0x08, 0x08, 0x08, 
	0xF0, 0x80, 0x80, 0x04, 0x08, 0x07, 0xD0, 0x08, 0x0A, 0x0B, 0x08, 0x08, 0x44, 0x08, 0x07, 0x08, 
	0x08, 0x08, 0x08, 0x84, 0x80, 0x80, 0x80, 0xF0, 0xF8, 0x98, 0x08, 0x02, 0x88, 0x80, 0x00, 0xE8, 
	0x08, 0x84, 0x00, 0x07, 0x80, 0xE0, 0x98, 0x08, 0x08, 0x38, 0x70, 0x22, 0x80, 0x80, 0xCB, 0x0E, 
	0x00, 0xFD, 0x2C, 0x00, 0x0A, 0x8A, 0x30, 0x08, 0x84, 0x80, 0x50, 0x08, 0x08, 0x17, 0x08, 0x80, 
	0x08, 0x9F, 0xA0, 0x38, 0x70, 0x10, 0x82, 0x80, 0xCA, 0xAD, 0x9A, 0x0B, 0xF8, 0x03, 0x21, 0x22, 
	0x86, 0x12, 0x80, 0x80, 0x00, 0x8C, 0xFB, 0x98, 0xAA, 0x38, 0x30, 0x48, 0x17, 0x10, 0xA0, 0xEA, 
	0xA9, 0xA9, 0x0D, 0x48, 0x28, 0x14, 0x23, 0x28, 0x80, 0x0B, 0x08, 0x0D, 0x08, 0x8F, 0x08, 0x08, 
	0xB8, 0x84, 0x80, 0x07, 0x80, 0x80, 0xF0, 0xA9, 0x89, 0x0A, 0x38, 0x03, 0x34, 0x27, 0x28, 0x08, 
	0x80, 0x08, 0x0C, 0x8C, 0x8E, 0xB9, 0x00, 0x8B, 0x80, 0x40, 0x40, 0x40, 0x08, 0x08, 0x8D, 0x8B, 
	0x80, 0x60, 0x03, 0x07, 0x82, 0x80, 0x80, 0x8B, 0x80, 0x80, 0xBF, 0x80, 0x80, 0x0D, 0xC8, 0x80, 
	0x80, 0x50, 0x40, 0x78, 0x80, 0x80, 0x80, 0x80, 0x00, 0x9F, 0x85, 0x80, 0x80, 0x80, 0x80, 0xF0, 
	0x83, 0x80, 0xE0, 0x08, 0xAA, 0xB0, 0x80, 0x80, 0x40, 0x40, 0x40, 0x87, 0x82, 0x80, 0x80, 0xC0, 
	0x80, 0x80, 0xF0, 0x09, 0x8A, 0x80, 0x80, 0x80, 0x05, 0x78, 0x81, 0x80, 0x0E, 0x8A, 0x0A, 0x02, 
	0x30, 0x70, 0x20, 0x83, 0x0B, 0x08, 0x8C, 0xF0, 0x09, 0xA8, 0x08, 0x08, 0x08, 0x08, 0x06, 0x08, 
	0x17, 0x08, 0x08, 0x08, 0x9F, 0xA0, 0x08, 0x48, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0xF8, 0x9F, 0x80, 0x80, 0x70, 0x01, 0x27, 0x48, 0x08, 0x8B, 0x08, 0x80, 0xF8, 
	0x8A, 0x08, 0x8C, 0x0C, 0x08, 0x04, 0x03, 0x17, 0x02, 0x08, 0x08, 0x0D, 0x9F, 0x08, 0x08, 0x08, 
	0x83, 0x07, 0x08, 0x08, 0x08, 0x8F, 0x00, 0x88, 0x00, 0x88, 0xC0, 0xC0, 0x48, 0x08, 0x83, 0x07, 
	0x02, 0x08, 0xB8, 0x80, 0x9F, 0x0A, 0x08, 0x30, 0x70, 0x00, 0x08, 0x08, 0x08, 0x9F, 0x80, 0x00, 
	0x88, 0x00, 0x88, 0x0E, 0x08, 0x08, 0x05, 0x78, 0x81, 0x80, 0xF0, 0x08, 0x0A, 0x08, 0x02, 0x08, 
	0x78, 0x81, 0x80, 0x0E, 0x08, 0xA8, 0x38, 0x80, 0x78, 0xD1, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x08, 0x08, 0xBF, 0x70, 0x80, 0x07, 0x80, 0x80, 0x0E, 0x08, 0x88, 0x80, 0x00, 
	0x08, 0x78, 0x82, 0xE8, 0x08, 0x08, 0x0B, 0x83, 0x00, 0x88, 0x00, 0x08, 0x88, 0x00, 0x88, 0x00, 
	0x08, 0x08, 0x08, 0x08, 0xFF, 0x8C, 0x70, 0x00, 0x80, 0xB7, 0x08, 0x80, 0x80, 0x08, 0x0F, 0x08, 
	0x08, 0x88, 0x87, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x88, 0x00, 0x88, 0x00, 0x88, 
	0x80, 0x80, 0x80, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 
	0x77, 0x06, 0x08, 0x08, 0x08, 0x08, 0xCF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x78, 0x07, 0x88, 
	0x00, 0x88, 0x00, 0x88, 0x00, 0x88, 0x00, 0x88, 0x00, 0x88, 0x3F, 0xFF, 0x80, 0x80, 0x00, 0x00, 
};
