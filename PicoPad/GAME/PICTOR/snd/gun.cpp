#include "include.h"

// sound format: Intel IMA ADPCM mono 4-bit 22050Hz
const u16 GunSnd_SampBlock = 1017; // number of samples per block

const u8 GunSnd[3572] = {
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xBF, 0xB9, 0xBD, 0xAC, 0x9B, 0x08, 
	0x28, 0x21, 0x26, 0x45, 0x45, 0x44, 0x43, 0x13, 0x01, 0x10, 0x89, 0x89, 0xA9, 0xB9, 0xBC, 0xDB, 
	0xCB, 0xCD, 0xDB, 0xBC, 0xBB, 0x99, 0x08, 0x10, 0x12, 0x22, 0x34, 0x53, 0x53, 0x53, 0x34, 0x23, 
	0x13, 0x01, 0x90, 0xBA, 0xAC, 0xBC, 0xAC, 0x9A, 0x88, 0x09, 0x18, 0x11, 0x53, 0x43, 0x12, 0x11, 
	0x08, 0xC8, 0xCB, 0xCC, 0xCC, 0xEB, 0xBA, 0xBB, 0xBC, 0xBB, 0xBB, 0xAB, 0x98, 0x89, 0x32, 0x73, 
	0x34, 0x35, 0x36, 0x53, 0x43, 0x22, 0x12, 0x11, 0x00, 0x98, 0xBA, 0xDB, 0xDB, 0xBB, 0xCC, 0xCB, 
	0xCB, 0xAB, 0x9A, 0x00, 0x10, 0x42, 0x53, 0x43, 0x34, 0x25, 0x22, 0x22, 0x12, 0x21, 0x81, 0x80, 
	0xAA, 0xCA, 0xDB, 0xCB, 0xCB, 0xBC, 0xCC, 0xBA, 0xBC, 0xBB, 0xA9, 0x89, 0x09, 0x20, 0x45, 0x34, 
	0x34, 0x35, 0x23, 0x23, 0x22, 0x12, 0x98, 0xBB, 0xCC, 0xCC, 0xBB, 0xAC, 0xCB, 0x89, 0x10, 0x31, 
	0x53, 0x22, 0x33, 0x24, 0x11, 0x21, 0x45, 0x24, 0x34, 0x81, 0x98, 0xBA, 0xBC, 0xDB, 0xBE, 0xAD, 
	0x9A, 0x99, 0x8A, 0x8A, 0xA8, 0xBA, 0xAD, 0x89, 0x80, 0x33, 0x25, 0x12, 0x63, 0x32, 0x46, 0x34, 
	0x33, 0x10, 0x41, 0x44, 0x33, 0x32, 0x12, 0x81, 0xB8, 0xCC, 0xCB, 0xAA, 0xB9, 0xDB, 0xCC, 0xBB, 
	0xCB, 0xAA, 0xB9, 0xCA, 0xAA, 0x18, 0x30, 0xB8, 0xBD, 0x9B, 0x32, 0x44, 0x14, 0x82, 0x31, 0x65, 
	0x53, 0x22, 0x00, 0x88, 0x99, 0x20, 0x34, 0x08, 0x99, 0xCA, 0xDC, 0xAC, 0xA9, 0xBB, 0x61, 0x25, 
	0x01, 0x61, 0x36, 0x13, 0x08, 0x90, 0x98, 0x20, 0xA3, 0xDD, 0x19, 0x12, 0xD9, 0xAB, 0xEA, 0xCD, 
	0x9A, 0x98, 0xCA, 0x0A, 0x21, 0x88, 0x40, 0x35, 0x12, 0x21, 0x02, 0xDB, 0x2A, 0x44, 0xA0, 0x8B, 
	0x73, 0x81, 0xA9, 0xAB, 0xAD, 0x38, 0x24, 0xA8, 0x4B, 0x57, 0x23, 0x01, 0x00, 0x98, 0xAA, 0x10, 
	0xA1, 0xBF, 0x1B, 0x11, 0xBA, 0x9B, 0xA8, 0xAC, 0x61, 0x23, 0xC9, 0x1A, 0x45, 0xA1, 0x8A, 0x44, 
	0xB1, 0xBC, 0x88, 0xC9, 0x8A, 0x43, 0x91, 0xCB, 0x38, 0x45, 0xB0, 0x9C, 0x88, 0xCB, 0x0A, 0x45, 
	0x80, 0xAB, 0x40, 0x33, 0xA0, 0x89, 0x82, 0xAD, 0x60, 0x03, 0xFB, 0x8A, 0x21, 0x91, 0xAC, 0x40, 
	0x82, 0xBC, 0x38, 0x03, 0xCD, 0x18, 0x13, 0xB9, 0x8B, 0x55, 0x02, 0xAA, 0x21, 0x93, 0xAD, 0x52, 
	0x23, 0xB9, 0x9C, 0x52, 0x03, 0xBA, 0x9B, 0xDA, 0x8B, 0x64, 0x12, 0x99, 0x18, 0x36, 0x83, 0xAA, 
	0x18, 0xB0, 0xAE, 0x52, 0x82, 0xBB, 0x1A, 0x44, 0x80, 0xBB, 0x40, 0x04, 0xBA, 0x39, 0x94, 0xCD, 
	0x8A, 0x33, 0xA1, 0xBE, 0x29, 0x34, 0xB0, 0xAB, 0x11, 0xC9, 0x49, 0x36, 0x91, 0xBA, 0x40, 0x46, 
	0x81, 0xAA, 0x10, 0xA0, 0xBB, 0x63, 0x13, 0xCA, 0x9C, 0x21, 0x83, 0xCC, 0x09, 0x81, 0xBD, 0x29, 
	0x14, 0xCA, 0x9C, 0x30, 0x15, 0xA9, 0x0B, 0x53, 0x92, 0xAC, 0x18, 0x92, 0xDC, 0x28, 0x24, 0xA9, 
	0x8C, 0x41, 0x34, 0xA0, 0x9B, 0x31, 0xC0, 0x9D, 0x51, 0x13, 0xA8, 0xAB, 0x52, 0x14, 0xCA, 0x0A, 
	0x01, 0xC9, 0x0A, 0x34, 0xA2, 0xBD, 0x0A, 0x44, 0x92, 0xBB, 0x39, 0x26, 0xC9, 0x9B, 0x52, 0x90, 
	0xBB, 0x50, 0x13, 0xC8, 0xAA, 0x42, 0x24, 0xC8, 0x8A, 0x33, 0xA1, 0xAE, 0x28, 0x35, 0x90, 0x9C, 
	0x30, 0x24, 0xC8, 0xAC, 0x08, 0xB0, 0xAD, 0x38, 0x04, 0xC9, 0x0B, 0x51, 0x24, 0xA8, 0x9C, 0x32, 
	0x83, 0xCC, 0x1A, 0x34, 0xA0, 0x9C, 0x51, 0x12, 0xC9, 0x8B, 0x52, 0x13, 0xC9, 0x0A, 0x33, 0xC8, 
	0x8B, 0x52, 0x34, 0x91, 0xAD, 0x38, 0x25, 0xA0, 0xAA, 0x8A, 0xB0, 0xBD, 0x48, 0x26, 0xB0, 0xAC, 
	0x00, 0xF4, 0x41, 0x00, 0x31, 0x14, 0xA0, 0xBB, 0x20, 0xC0, 0xBE, 0x29, 0x35, 0xA1, 0xAB, 0x18, 
	0x33, 0xB8, 0xAE, 0x38, 0x15, 0xEA, 0x0A, 0x33, 0x92, 0xAC, 0x10, 0x35, 0x04, 0xC9, 0x8B, 0x44, 
	0x02, 0xCA, 0x8A, 0x01, 0xBC, 0x0B, 0x34, 0x81, 0x99, 0x9A, 0x71, 0x35, 0xA0, 0xAC, 0x10, 0xA0, 
	0xCC, 0x89, 0x41, 0x22, 0xA1, 0x9A, 0x62, 0x14, 0xB8, 0x9D, 0x00, 0xA0, 0x9C, 0x72, 0x13, 0xA9, 
	0x9B, 0x28, 0x45, 0x02, 0xA9, 0x9A, 0x31, 0xA2, 0xDE, 0x09, 0x42, 0xA0, 0x9B, 0x41, 0xA1, 0xBB, 
	0x89, 0x52, 0x44, 0x03, 0xC9, 0x9B, 0x21, 0xD9, 0x9C, 0x30, 0x36, 0x81, 0xAC, 0x1A, 0x33, 0x93, 
	0xCB, 0x89, 0xA0, 0xCC, 0x0A, 0x63, 0x03, 0xB8, 0xAB, 0x40, 0x56, 0x02, 0xCA, 0xAB, 0x20, 0x12, 
	0xDB, 0x1A, 0x45, 0x80, 0xBB, 0x19, 0x33, 0xC1, 0xAB, 0x51, 0x23, 0x98, 0xDC, 0x89, 0x43, 0x80, 
	0xAB, 0x89, 0x72, 0x15, 0xB8, 0x9D, 0x20, 0x33, 0x92, 0xDC, 0x09, 0x01, 0xDB, 0x09, 0x33, 0x82, 
	0xDB, 0x0A, 0x45, 0x23, 0x80, 0xCA, 0x9B, 0x20, 0xA1, 0xAD, 0x28, 0x44, 0x13, 0xC9, 0x9C, 0x20, 
	0x00, 0x81, 0xEA, 0x9B, 0x33, 0xE8, 0x8B, 0x52, 0x13, 0xA8, 0xCB, 0x71, 0x34, 0x90, 0xAB, 0x89, 
	0x41, 0x12, 0xEA, 0x8B, 0x21, 0x98, 0xAA, 0x89, 0x30, 0x83, 0xCF, 0x39, 0x37, 0x11, 0x01, 0xC8, 
	0xAB, 0x00, 0xC9, 0x8A, 0x21, 0x53, 0x35, 0xB1, 0x9C, 0x28, 0x91, 0xA9, 0xB9, 0xAE, 0x28, 0x90, 
	0x89, 0x35, 0xA2, 0xCC, 0x9C, 0x19, 0x45, 0x24, 0x90, 0xAA, 0x19, 0x23, 0xA0, 0xBF, 0x9A, 0x52, 
	0x03, 0xC9, 0x8A, 0x12, 0x80, 0xC9, 0x9A, 0x54, 0x91, 0xAC, 0x61, 0x13, 0x88, 0x98, 0x19, 0x55, 
	0x81, 0xAB, 0x99, 0xD9, 0xAC, 0x28, 0x44, 0x02, 0xEA, 0x9A, 0x31, 0x12, 0xA8, 0xBB, 0x8A, 0x31, 
	0x54, 0x46, 0x02, 0xCB, 0x0B, 0x30, 0x03, 0xEC, 0xAB, 0x20, 0x23, 0x88, 0x20, 0x24, 0xB0, 0xAB, 
	0x40, 0x15, 0xC8, 0xBC, 0x20, 0x26, 0xB8, 0xBE, 0x09, 0x12, 0x88, 0x28, 0x55, 0x02, 0xB9, 0x8B, 
	0x43, 0x25, 0x90, 0xBC, 0x8A, 0x91, 0xAC, 0x30, 0x13, 0xCC, 0x8B, 0x30, 0x57, 0x03, 0xCB, 0x8A, 
	0x12, 0xA0, 0xBB, 0x2A, 0x45, 0x82, 0xBB, 0x20, 0x03, 0xC9, 0xAB, 0x39, 0x47, 0xD0, 0xAC, 0x31, 
	0x14, 0x88, 0x09, 0x21, 0x25, 0xB8, 0xAC, 0x41, 0x24, 0xB8, 0xDC, 0x89, 0x88, 0xB9, 0x0A, 0x44, 
	0x02, 0xAA, 0x19, 0x64, 0x23, 0xA8, 0x9C, 0x38, 0x24, 0xC9, 0x9B, 0x53, 0x12, 0xFB, 0xBB, 0x18, 
	0x22, 0x82, 0x89, 0x51, 0x12, 0xCB, 0x0B, 0x45, 0x81, 0xCB, 0x9A, 0x41, 0x24, 0xEA, 0x9B, 0x30, 
	0x22, 0x91, 0xCA, 0x39, 0x24, 0xDA, 0x1A, 0x34, 0x82, 0x99, 0x8A, 0x72, 0x24, 0xB8, 0xBD, 0x19, 
	0x81, 0xB9, 0x8B, 0x63, 0x33, 0xC1, 0xBD, 0x19, 0x43, 0x81, 0xB9, 0x9A, 0x20, 0x80, 0x0A, 0x76, 
	0x14, 0xA8, 0xBB, 0x19, 0x34, 0xA0, 0xCD, 0x9B, 0x32, 0x15, 0xA9, 0x28, 0x34, 0x81, 0xBB, 0xAB, 
	0x41, 0x82, 0xEA, 0x09, 0x53, 0x82, 0xEC, 0xAB, 0x18, 0x10, 0x00, 0x28, 0x65, 0x13, 0xB9, 0x9C, 
	0x31, 0x33, 0x01, 0xAA, 0x9A, 0xA8, 0xCE, 0x8B, 0x21, 0x81, 0xDC, 0x9B, 0x62, 0x44, 0x01, 0xA9, 
	0x8A, 0x01, 0x91, 0xCB, 0x1A, 0x54, 0x82, 0xA9, 0xBB, 0x09, 0x03, 0xEA, 0x8C, 0x62, 0x02, 0xB9, 
	0x99, 0x08, 0x42, 0x22, 0xB9, 0x78, 0x26, 0x91, 0xBB, 0x8A, 0x44, 0x02, 0xD9, 0xAB, 0x19, 0x01, 
	0xDB, 0x9C, 0x18, 0x01, 0x9A, 0x30, 0x66, 0x33, 0x91, 0xDB, 0x19, 0x11, 0x80, 0x88, 0x21, 0x54, 
	0x92, 0xDB, 0xCB, 0xAA, 0x80, 0xB0, 0x8A, 0x54, 0x13, 0x11, 0x21, 0x22, 0x23, 0xDB, 0xAC, 0x19, 
	0x00, 0x09, 0x35, 0x00, 0x37, 0xB8, 0xAF, 0x09, 0x81, 0xA8, 0xCB, 0x8B, 0x73, 0x12, 0x89, 0x20, 
	0x00, 0x98, 0x98, 0x41, 0x36, 0x25, 0x82, 0xDB, 0x9B, 0x00, 0xB9, 0xBC, 0x9A, 0x51, 0x34, 0xA8, 
	0xAC, 0x20, 0x44, 0x82, 0xCA, 0x8A, 0x11, 0xA0, 0xA9, 0x21, 0x27, 0x92, 0xBE, 0x1A, 0x63, 0x13, 
	0xA0, 0xCB, 0x09, 0x80, 0xA9, 0xEB, 0x0A, 0x73, 0x15, 0x98, 0x08, 0x80, 0x00, 0xB9, 0x8A, 0x51, 
	0x43, 0x01, 0xEA, 0x9A, 0x08, 0xAA, 0xCC, 0xAA, 0x30, 0x27, 0x82, 0x98, 0x18, 0x53, 0x13, 0xDA, 
	0x8A, 0x11, 0x31, 0x11, 0x90, 0x20, 0xB1, 0xEF, 0xAC, 0x9B, 0x50, 0x13, 0x98, 0x88, 0x11, 0x42, 
	0x13, 0xDA, 0x0A, 0x34, 0x14, 0x90, 0xBC, 0x8A, 0x01, 0xCB, 0xAD, 0x99, 0x09, 0xA0, 0xBD, 0x58, 
	0x36, 0x02, 0x88, 0x98, 0x08, 0x53, 0x23, 0x98, 0x89, 0x64, 0x13, 0xD9, 0xAC, 0x0A, 0x00, 0xA8, 
	0xBB, 0x0A, 0x22, 0x91, 0xDD, 0x9B, 0x73, 0x25, 0x81, 0xBA, 0x89, 0x10, 0x11, 0xAA, 0xAD, 0x63, 
	0x25, 0x81, 0xA9, 0x9A, 0x20, 0x13, 0xCA, 0xCD, 0xBB, 0x89, 0x90, 0xBC, 0x70, 0x27, 0x11, 0x88, 
	0xA9, 0x18, 0x23, 0x02, 0xC9, 0xBB, 0x41, 0x14, 0xB9, 0xBE, 0xAB, 0x18, 0x80, 0xDC, 0x9A, 0x30, 
	0x63, 0x01, 0x80, 0x51, 0x23, 0x92, 0xBB, 0x8B, 0x44, 0x43, 0x80, 0xCB, 0x1A, 0x22, 0xC0, 0xCE, 
	0xBC, 0x08, 0x43, 0x22, 0x88, 0x9A, 0x21, 0x23, 0xA8, 0xBA, 0x10, 0x54, 0x83, 0xEB, 0xAB, 0x18, 
	0x53, 0x11, 0xDB, 0x9B, 0x8A, 0x89, 0x80, 0x10, 0x44, 0x31, 0x61, 0x24, 0x12, 0x00, 0xD9, 0x0A, 
	0x62, 0x22, 0x01, 0xFD, 0xBB, 0x29, 0x22, 0x13, 0x98, 0xCC, 0x09, 0x21, 0x12, 0xB9, 0xAF, 0x9A, 
	0x11, 0x12, 0xB0, 0x19, 0x74, 0x37, 0x22, 0x91, 0xEB, 0xAA, 0x88, 0x88, 0x10, 0xA9, 0x9B, 0x74, 
	0x23, 0x10, 0xB9, 0xCD, 0x8A, 0x21, 0x22, 0x81, 0x9A, 0x8A, 0x32, 0x35, 0x13, 0xC9, 0x0B, 0x33, 
	0x08, 0xDA, 0xDF, 0x8A, 0x63, 0x43, 0x12, 0xA0, 0xBD, 0xAB, 0x8A, 0xA9, 0xBA, 0xBC, 0x39, 0x57, 
	0x32, 0x13, 0x90, 0x9A, 0x08, 0x00, 0x88, 0xBB, 0x9E, 0x28, 0x32, 0x35, 0x01, 0xBC, 0x38, 0x13, 
	0xEB, 0xD9, 0xCD, 0x9B, 0x31, 0x33, 0x12, 0x80, 0x9A, 0x61, 0x45, 0x12, 0xA8, 0xAC, 0xBB, 0x10, 
	0x33, 0x13, 0xA8, 0xA9, 0x12, 0x83, 0xFB, 0xCF, 0xAB, 0x18, 0x23, 0x33, 0x92, 0xEC, 0x0A, 0x22, 
	0x23, 0x12, 0xD0, 0xAB, 0x62, 0x23, 0x12, 0xA8, 0xAE, 0x3A, 0x54, 0x33, 0x11, 0xDA, 0xCC, 0x9A, 
	0xAA, 0x9A, 0x88, 0x19, 0x73, 0x24, 0x11, 0x99, 0xCB, 0x1A, 0x53, 0x33, 0x12, 0xE8, 0xBB, 0x09, 
	0x32, 0x33, 0x84, 0xCA, 0x09, 0x43, 0x22, 0x91, 0xFD, 0xAD, 0x89, 0x00, 0x21, 0x01, 0x98, 0x10, 
	0x21, 0x01, 0xD0, 0xEC, 0x9A, 0x32, 0x13, 0x25, 0x83, 0xAA, 0x70, 0x24, 0x02, 0x90, 0xFB, 0xBB, 
	0x28, 0x22, 0x22, 0x91, 0xEA, 0x8A, 0x21, 0x00, 0xA8, 0xBF, 0xBD, 0x98, 0x08, 0x08, 0x98, 0x10, 
	0x67, 0x34, 0x32, 0x02, 0xC9, 0x9C, 0x9A, 0x98, 0x88, 0xA1, 0x9B, 0x60, 0x44, 0x12, 0x81, 0xB9, 
	0xBF, 0x09, 0x00, 0x88, 0x89, 0xBA, 0xAC, 0x20, 0x25, 0x23, 0x11, 0x32, 0x25, 0x13, 0x91, 0xCE, 
	0xBD, 0x28, 0x44, 0x33, 0x23, 0xB8, 0xCC, 0xA9, 0x98, 0xCB, 0xCC, 0xDB, 0x99, 0x32, 0x25, 0x23, 
	0x02, 0x98, 0x88, 0x22, 0x81, 0x99, 0xBE, 0x8B, 0x31, 0x43, 0x33, 0xA0, 0x0D, 0x63, 0x14, 0x01, 
	0xBB, 0xEF, 0x9B, 0x08, 0x10, 0x01, 0x08, 0x88, 0x28, 0x47, 0x23, 0x81, 0xA9, 0xBD, 0x8B, 0x20, 
	0x10, 0x81, 0x82, 0x19, 0x52, 0x24, 0xA0, 0xFB, 0xA9, 0x18, 0x33, 0x81, 0xD0, 0xFC, 0x9B, 0x10, 
	0x00, 0xF7, 0x34, 0x00, 0x11, 0x12, 0xB1, 0xBB, 0x73, 0x04, 0x91, 0x91, 0xBC, 0x8B, 0x63, 0x44, 
	0x22, 0x81, 0xA9, 0xBB, 0xCB, 0xCB, 0xBB, 0xAB, 0x1B, 0x64, 0x33, 0x21, 0x08, 0xDB, 0x1A, 0x52, 
	0x13, 0x11, 0xE9, 0xAE, 0x9A, 0x08, 0x02, 0x12, 0x32, 0x01, 0x71, 0x35, 0x02, 0x91, 0xCA, 0xBD, 
	0xA9, 0x98, 0x10, 0x81, 0x08, 0x40, 0x13, 0x02, 0xD8, 0xCE, 0xAB, 0x09, 0x32, 0x22, 0x21, 0xA0, 
	0x8B, 0x77, 0x24, 0x11, 0x81, 0xD9, 0xAB, 0x18, 0x31, 0x12, 0x98, 0xCA, 0x9D, 0x31, 0x33, 0x80, 
	0xB0, 0xED, 0xBC, 0x99, 0xCA, 0xBB, 0xDA, 0x88, 0x55, 0x33, 0x34, 0x12, 0x90, 0x9B, 0x09, 0x98, 
	0xBB, 0xAA, 0xD0, 0xAB, 0x74, 0x14, 0x10, 0x11, 0xE9, 0x9A, 0x01, 0x90, 0x09, 0x9A, 0xED, 0x9A, 
	0x08, 0x10, 0x08, 0x52, 0x12, 0x30, 0x36, 0x80, 0x8B, 0xBB, 0x9F, 0x38, 0x44, 0x22, 0x13, 0x91, 
	0xBA, 0xCA, 0xA0, 0xEB, 0xBB, 0xCC, 0xCB, 0x28, 0x24, 0x21, 0x33, 0x01, 0x0A, 0x51, 0x14, 0x11, 
	0x08, 0xBC, 0xAD, 0x89, 0x80, 0xA9, 0x2A, 0xB0, 0x78, 0x47, 0x13, 0x80, 0xB8, 0xDD, 0x9A, 0x28, 
	0x80, 0x81, 0x90, 0xAB, 0x28, 0x36, 0x25, 0x02, 0xA9, 0xCC, 0xAA, 0x19, 0x22, 0x01, 0x01, 0x08, 
	0x08, 0x37, 0x02, 0x08, 0xB8, 0x9F, 0x28, 0x80, 0xB0, 0xBB, 0xCF, 0x99, 0x10, 0x42, 0x14, 0x12, 
	0x22, 0xD8, 0x2A, 0x35, 0x98, 0x8C, 0xA2, 0xBD, 0x40, 0x34, 0x12, 0x82, 0xA0, 0xCD, 0xDA, 0x89, 
	0x89, 0x99, 0x28, 0xA2, 0x38, 0x57, 0x08, 0x89, 0x91, 0xD9, 0x8A, 0x10, 0x22, 0x02, 0x08, 0x43, 
	0xC0, 0x30, 0x47, 0x32, 0x03, 0xAA, 0xEA, 0xCC, 0xAB, 0x99, 0x28, 0x21, 0x80, 0x23, 0x24, 0x03, 
	0x43, 0x03, 0xBC, 0xBC, 0xFB, 0x9A, 0x08, 0x02, 0x02, 0x08, 0xC8, 0x34, 0x73, 0x37, 0x12, 0x10, 
	0x01, 0xCB, 0xAD, 0xBA, 0xDB, 0xAA, 0x99, 0x09, 0x21, 0x50, 0x73, 0x15, 0x80, 0x88, 0x90, 0xCB, 
	0x0B, 0x08, 0x18, 0x34, 0x43, 0x10, 0x08, 0xA8, 0x80, 0x03, 0xF8, 0x0B, 0xA8, 0xBB, 0xAF, 0xA0, 
	0xAA, 0xEB, 0xA9, 0x08, 0x62, 0x36, 0x35, 0x22, 0x00, 0xA8, 0xBA, 0xCD, 0xBA, 0x0A, 0xA9, 0x09, 
	0x23, 0x02, 0x72, 0x27, 0x02, 0x08, 0x81, 0xA9, 0x9D, 0x98, 0x88, 0x00, 0x28, 0x8A, 0x0B, 0xBC, 
	0x0B, 0x08, 0x08, 0xBE, 0x0C, 0xC8, 0x9E, 0x08, 0xB2, 0xBA, 0x80, 0x34, 0x40, 0x73, 0x47, 0x22, 
	0x11, 0x02, 0x00, 0xAA, 0xAC, 0xAD, 0xAA, 0xDB, 0xAA, 0xA8, 0x90, 0x48, 0x63, 0x34, 0x11, 0x81, 
	0xA0, 0xC9, 0x9B, 0x9A, 0x08, 0x0B, 0x48, 0xB8, 0x80, 0x40, 0x04, 0x03, 0x08, 0x05, 0x8C, 0x80, 
	0x70, 0x81, 0x8A, 0x80, 0xC0, 0xC8, 0x4B, 0x72, 0x33, 0x82, 0x20, 0x80, 0xBF, 0xAD, 0x9A, 0xAB, 
	0x89, 0x20, 0x38, 0x30, 0x70, 0x23, 0x32, 0x42, 0x38, 0x30, 0x04, 0x08, 0x08, 0xBE, 0x0B, 0xCC, 
	0xED, 0x89, 0x08, 0x11, 0x22, 0x44, 0x31, 0xA2, 0xDA, 0xA9, 0x9C, 0xBC, 0x8B, 0x2A, 0x50, 0x82, 
	0x32, 0x67, 0x81, 0x98, 0x10, 0x08, 0x9B, 0x8A, 0x02, 0x63, 0x21, 0x08, 0x08, 0x8B, 0x9F, 0x88, 
	0x00, 0xB8, 0x80, 0x40, 0xAC, 0xDC, 0xBC, 0xA9, 0x9C, 0xAA, 0x02, 0x38, 0x67, 0x23, 0x22, 0x23, 
	0x23, 0xA1, 0xDA, 0xA9, 0x9C, 0xCA, 0xA9, 0xAA, 0x30, 0x8B, 0x7B, 0x36, 0x11, 0x28, 0x28, 0xA8, 
	0xEA, 0xBB, 0x9A, 0x88, 0x00, 0x83, 0x80, 0x80, 0x06, 0xC8, 0x80, 0xD0, 0xBB, 0x80, 0x80, 0xE8, 
	0x30, 0x27, 0x20, 0x08, 0x08, 0x80, 0x44, 0x47, 0x23, 0x22, 0x12, 0xA9, 0xBD, 0xDC, 0xBC, 0xBB, 
	0xA9, 0xBB, 0x80, 0x24, 0x41, 0x55, 0x23, 0x12, 0x08, 0x98, 0x9A, 0xAA, 0x80, 0x80, 0x24, 0x17, 
	0x00, 0x06, 0x2D, 0x00, 0xA0, 0xA8, 0xAA, 0xBB, 0x88, 0xCC, 0xCA, 0xB0, 0x08, 0x08, 0x08, 0xBE, 
	0xC8, 0x80, 0x80, 0x80, 0x76, 0x53, 0x33, 0x22, 0xA1, 0xA9, 0xAD, 0xA9, 0xBD, 0xA9, 0x80, 0x00, 
	0x88, 0x00, 0x34, 0x55, 0x34, 0x25, 0x81, 0x90, 0xAA, 0xCC, 0xBB, 0xBC, 0xAB, 0x89, 0x02, 0x33, 
	0x30, 0x35, 0x43, 0x02, 0xC0, 0xAC, 0xBB, 0x0C, 0x0C, 0x33, 0x43, 0x30, 0x74, 0x01, 0x08, 0x38, 
	0x38, 0x37, 0x21, 0x08, 0xBA, 0xFB, 0x9B, 0x9C, 0xCB, 0xA9, 0x80, 0x02, 0x38, 0x80, 0x74, 0x10, 
	0x21, 0xA2, 0xB0, 0x9F, 0x0A, 0xAA, 0xB0, 0x48, 0x32, 0x43, 0x33, 0x84, 0x30, 0x04, 0x43, 0x03, 
	0x8C, 0xC0, 0xFB, 0xAC, 0xBA, 0xC9, 0x0A, 0x08, 0x32, 0x16, 0x14, 0x12, 0x34, 0x22, 0xB2, 0xBA, 
	0x9F, 0x9A, 0xAA, 0x80, 0x30, 0x48, 0x17, 0x12, 0x80, 0x83, 0xC0, 0x8A, 0x80, 0xD0, 0xBB, 0xC0, 
	0x8B, 0x0C, 0x8C, 0x0B, 0x58, 0x08, 0x03, 0x08, 0x08, 0x87, 0x24, 0x80, 0xC0, 0xB8, 0xC8, 0xBC, 
	0xBB, 0x08, 0x08, 0x36, 0x24, 0x24, 0x33, 0x27, 0x28, 0x15, 0x01, 0xCA, 0xCA, 0xC9, 0xBB, 0xAA, 
	0x00, 0x38, 0x73, 0x32, 0x52, 0x11, 0xA0, 0xAA, 0xBB, 0xCE, 0xB9, 0xAA, 0x0A, 0x32, 0x43, 0x33, 
	0x34, 0x38, 0x00, 0x08, 0x0F, 0x08, 0x48, 0x80, 0x04, 0x48, 0x08, 0x0C, 0xC8, 0x8B, 0xBC, 0xC0, 
	0xB8, 0x08, 0x04, 0x04, 0x84, 0x34, 0x33, 0x40, 0x80, 0x50, 0x08, 0x8C, 0xCB, 0xFB, 0x9A, 0xDA, 
	0x99, 0x88, 0x23, 0x32, 0x17, 0x24, 0x23, 0x08, 0xA8, 0x0B, 0xAC, 0xBB, 0xBC, 0xC0, 0x03, 0x43, 
	0x43, 0x33, 0x03, 0x80, 0xF0, 0xBA, 0xCB, 0xBB, 0x0C, 0xB8, 0x08, 0x68, 0x08, 0x08, 0x04, 0x08, 
	0x68, 0x08, 0x48, 0x30, 0x40, 0x40, 0x08, 0x08, 0x08, 0xAF, 0xB8, 0xB8, 0xBD, 0x80, 0x80, 0x80, 
	0x60, 0x80, 0x50, 0x83, 0x34, 0x40, 0x03, 0x84, 0xC0, 0xCB, 0xBB, 0x8F, 0xA9, 0xA8, 0x20, 0x30, 
	0x25, 0x26, 0x23, 0x22, 0x80, 0xC0, 0x9E, 0xBC, 0xAB, 0x9C, 0x0A, 0x2A, 0x32, 0x43, 0x33, 0x27, 
	0x21, 0x02, 0x08, 0xB8, 0xC8, 0x08, 0xD8, 0x80, 0x80, 0x80, 0x60, 0x80, 0x80, 0x86, 0x80, 0x0C, 
	0xC8, 0x0B, 0x8C, 0xCB, 0x9F, 0x0A, 0x8A, 0x00, 0x02, 0x43, 0x24, 0x33, 0x34, 0x48, 0x33, 0x48, 
	0x80, 0x40, 0x30, 0x00, 0x08, 0x88, 0x8F, 0xBC, 0xCF, 0xBA, 0xBA, 0xAA, 0x08, 0x33, 0x70, 0x22, 
	0x22, 0x23, 0x80, 0x80, 0x8C, 0x8C, 0xBC, 0x80, 0x04, 0x84, 0x34, 0x17, 0x21, 0x82, 0xB3, 0x80, 
	0x8B, 0xCC, 0xBB, 0xAC, 0xAC, 0xBB, 0xBC, 0xC0, 0x80, 0x34, 0x33, 0x34, 0x34, 0x43, 0x38, 0xC0, 
	0xB8, 0xC8, 0xBC, 0xBB, 0xC8, 0x08, 0x44, 0x33, 0x43, 0x24, 0x03, 0x0C, 0x0C, 0xBB, 0x0C, 0x0C, 
	0xBB, 0x08, 0x08, 0x08, 0x78, 0x80, 0x80, 0x50, 0x8B, 0x08, 0x05, 0x34, 0x30, 0x35, 0x83, 0x04, 
	0x08, 0x0D, 0xCB, 0xBB, 0xB8, 0xBD, 0x80, 0x0C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x78, 0x61, 0x30, 
	0x48, 0x30, 0x80, 0x80, 0x3E, 0x80, 0x8C, 0x80, 0x50, 0x40, 0x48, 0x83, 0x80, 0xB5, 0xB8, 0xAF, 
	0xCC, 0xBA, 0x9A, 0xAA, 0x08, 0x33, 0x34, 0x73, 0x41, 0x21, 0x03, 0x22, 0x80, 0x0B, 0x08, 0xD8, 
	0x08, 0xD8, 0xC0, 0xB3, 0x08, 0x08, 0x08, 0x78, 0x80, 0x80, 0x80, 0x80, 0x8F, 0xCB, 0xB8, 0xFC, 
	0xA0, 0x80, 0x80, 0x20, 0x24, 0x33, 0x34, 0x83, 0x40, 0x80, 0x80, 0x8D, 0x00, 0x88, 0x80, 0x07, 
	0x08, 0x04, 0x08, 0xD8, 0xC8, 0xBB, 0xBC, 0x8C, 0x0B, 0x08, 0x08, 0x86, 0x80, 0x80, 0x80, 0xF0, 
	0x08, 0x08, 0x08, 0x86, 0x34, 0x03, 0x34, 0x43, 0x03, 0x04, 0x03, 0x08, 0x08, 0x88, 0xCF, 0xBB, 
	0x00, 0x01, 0x25, 0x00, 0xAC, 0xDC, 0xAA, 0x0A, 0x0B, 0x30, 0x40, 0x53, 0x62, 0x12, 0x20, 0x08, 
	0xB8, 0xC8, 0xBB, 0xC8, 0x08, 0x08, 0x05, 0x34, 0x43, 0x24, 0x30, 0x08, 0xD8, 0xBB, 0xC8, 0xAF, 
	0xA9, 0xA8, 0xB0, 0x08, 0x08, 0x04, 0x58, 0x03, 0x84, 0x34, 0x08, 0x84, 0x40, 0xB8, 0x08, 0x8D, 
	0x8B, 0x8C, 0x00, 0x88, 0x00, 0x87, 0x04, 0x83, 0x04, 0x08, 0x0D, 0x0C, 0xB8, 0xC0, 0x08, 0x08, 
	0x08, 0x78, 0x08, 0x80, 0x58, 0x80, 0xD0, 0x80, 0x8B, 0x50, 0x08, 0x84, 0x40, 0x48, 0x48, 0x08, 
	0xB8, 0xC8, 0x0C, 0xAC, 0x8B, 0x8B, 0x8C, 0x80, 0x05, 0x48, 0x80, 0x04, 0x08, 0x08, 0x85, 0x00, 
	0x58, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9F, 0x80, 0x60, 0x84, 0x84, 0x33, 0x40, 0xB8, 0xC8, 0xEC, 
	0xC9, 0xC9, 0x99, 0xA9, 0x80, 0x02, 0x33, 0x43, 0x17, 0x12, 0x22, 0x32, 0x80, 0x80, 0x08, 0xF0, 
	0x80, 0xC0, 0xC0, 0xB0, 0xB8, 0x08, 0x08, 0x08, 0x78, 0x00, 0x58, 0x30, 0x0C, 0x0C, 0xAC, 0x8B, 
	0xCB, 0xCB, 0x0B, 0x08, 0x58, 0x43, 0x33, 0x24, 0x24, 0x03, 0x03, 0xD8, 0xC0, 0xC0, 0x8A, 0xC0, 
	0x80, 0x80, 0x80, 0x80, 0x87, 0x00, 0x48, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xBF, 0xF8, 
	0x08, 0xD8, 0x80, 0x04, 0x08, 0x58, 0x08, 0x08, 0x80, 0x08, 0x80, 0x08, 0x08, 0x80, 0xF8, 0x0D, 
	0x08, 0x78, 0x00, 0x58, 0x80, 0x04, 0x03, 0x08, 0x08, 0xF8, 0x08, 0x8C, 0x80, 0x80, 0x60, 0x80, 
	0x08, 0x08, 0x8E, 0xCB, 0xB8, 0xBC, 0xC8, 0x80, 0x04, 0x03, 0x04, 0x58, 0x38, 0x80, 0xD0, 0x80, 
	0x08, 0x80, 0x06, 0x03, 0x08, 0xC5, 0x30, 0xD0, 0x80, 0x80, 0x80, 0x80, 0x06, 0x03, 0x04, 0x08, 
	0x08, 0xF8, 0xB0, 0xBC, 0xCB, 0xBB, 0xC0, 0xB8, 0x58, 0x38, 0x40, 0x43, 0x33, 0x48, 0x03, 0x84, 
	0x00, 0xD8, 0x80, 0x0C, 0x8C, 0x00, 0x88, 0x8C, 0x80, 0x80, 0x80, 0x80, 0x80, 0x27, 0x08, 0x07, 
	0x08, 0x08, 0xE8, 0xC0, 0xBB, 0xBC, 0xC0, 0x8A, 0x08, 0x40, 0x40, 0x34, 0x73, 0x82, 0x82, 0x83, 
	0xC0, 0xB0, 0xCB, 0xC0, 0x80, 0x0B, 0x08, 0x08, 0x88, 0x70, 0x00, 0x58, 0x48, 0x80, 0x80, 0x08, 
	0x60, 0x08, 0x8C, 0x80, 0x8C, 0x8B, 0x0D, 0x8C, 0x00, 0x88, 0x50, 0x34, 0x48, 0x83, 0x84, 0x80, 
	0x80, 0x80, 0x0E, 0xC8, 0x8B, 0x80, 0x8C, 0x80, 0x80, 0x70, 0x80, 0x08, 0x08, 0x8E, 0x00, 0x0D, 
	0x48, 0x08, 0x48, 0x30, 0x80, 0x0D, 0x08, 0x08, 0x0E, 0x08, 0x88, 0x00, 0x86, 0x80, 0x50, 0x08, 
	0x08, 0x08, 0x8E, 0xC0, 0x08, 0x8C, 0x00, 0x08, 0x88, 0x07, 0x83, 0x04, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x88, 0x37, 0x00, 0x08, 0x08, 0xB7, 0x08, 0xF8, 0xD8, 0xC0, 0x80, 0x80, 0x80, 0x80, 
	0x06, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x88, 0x85, 0x00, 0x84, 0x80, 0x00, 0x88, 0x00, 0x9F, 0x8C, 
	0x0C, 0x08, 0x08, 0x78, 0x38, 0x03, 0x34, 0x40, 0x08, 0x8C, 0xC0, 0x8B, 0xBC, 0xC8, 0xC0, 0x80, 
	0x4B, 0x08, 0x84, 0x40, 0x08, 0x08, 0x08, 0x86, 0x80, 0x80, 0x60, 0x08, 0x84, 0xC0, 0x80, 0x08, 
	0x0D, 0x08, 0x0D, 0x08, 0x48, 0x40, 0x48, 0x48, 0x38, 0x80, 0x80, 0xBD, 0x0C, 0xCB, 0xAE, 0x00, 
	0x0B, 0x80, 0x08, 0x84, 0x34, 0x43, 0x83, 0x30, 0x50, 0x03, 0x08, 0x08, 0x08, 0x8F, 0x8B, 0xC8, 
	0xBC, 0xC8, 0xC0, 0xB8, 0x84, 0x30, 0x40, 0x34, 0x48, 0x83, 0x84, 0xC0, 0xB0, 0xBC, 0xCB, 0xBB, 
	0x8B, 0x8C, 0x80, 0x05, 0x43, 0x43, 0x33, 0x84, 0x43, 0x08, 0xC0, 0x08, 0x8C, 0xC0, 0x08, 0x08, 
	0xD8, 0x08, 0x08, 0xE8, 0x80, 0x80, 0x80, 0x06, 0x48, 0x80, 0x04, 0x88, 0x00, 0xE8, 0x08, 0xBC, 
	0x00, 0xFD, 0x25, 0x00, 0x0C, 0x8B, 0x80, 0x80, 0x60, 0x40, 0x83, 0x34, 0x34, 0x08, 0x84, 0x80, 
	0x00, 0xE8, 0x08, 0x0C, 0x8C, 0xC0, 0xB0, 0xC8, 0x80, 0x0C, 0xC8, 0x30, 0x80, 0x50, 0x30, 0x50, 
	0x08, 0x84, 0x00, 0x0D, 0x08, 0x0D, 0x8B, 0x00, 0x88, 0x60, 0x30, 0x40, 0x48, 0x80, 0x80, 0x80, 
	0x00, 0x8F, 0x80, 0x80, 0x08, 0xF0, 0x08, 0x08, 0x88, 0x00, 0x8F, 0xC0, 0x08, 0x08, 0x08, 0x08, 
	0x87, 0x40, 0x08, 0x84, 0x00, 0x84, 0x0C, 0x08, 0x08, 0x80, 0x0F, 0x08, 0x08, 0x88, 0x70, 0x08, 
	0x08, 0x08, 0x80, 0x08, 0xF8, 0x03, 0x08, 0x08, 0x08, 0x08, 0xAF, 0xE0, 0xB8, 0x8C, 0xC0, 0x80, 
	0x08, 0x85, 0x40, 0x03, 0x84, 0x84, 0x84, 0x80, 0x80, 0x80, 0x08, 0x80, 0xF8, 0x88, 0x80, 0x80, 
	0x8F, 0x80, 0xD0, 0x80, 0x0C, 0x88, 0x50, 0x08, 0x84, 0x40, 0x08, 0x40, 0xC8, 0x80, 0x0C, 0x0C, 
	0xB8, 0x08, 0x08, 0x08, 0x87, 0x04, 0x83, 0x04, 0x03, 0x08, 0x08, 0x8F, 0x00, 0x8C, 0xC0, 0x08, 
	0x08, 0x8D, 0x80, 0x80, 0x80, 0x8E, 0x04, 0x08, 0x58, 0x80, 0x04, 0x08, 0x58, 0x08, 0x08, 0xE0, 
	0x80, 0x0C, 0x08, 0x8C, 0x80, 0x80, 0x80, 0x07, 0x08, 0x08, 0x88, 0x00, 0x88, 0x00, 0x88, 0x00, 
	0x88, 0x80, 0x80, 0x80, 0x80, 0x00, 0x08, 0xF8, 0xFF, 0x8F, 0x08, 0x08, 0x85, 0x40, 0x08, 0x84, 
	0x40, 0x80, 0x08, 0x08, 0x8E, 0x00, 0x08, 0x88, 0x00, 0x8F, 0x08, 0xD8, 0x08, 0xD8, 0x80, 0x80, 
	0x80, 0x60, 0x40, 0x48, 0x48, 0x08, 0x83, 0x80, 0x80, 0x0E, 0x0C, 0xAC, 0x08, 0x0C, 0x08, 0x84, 
	0x80, 0x85, 0x30, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xAF, 0x08, 0x88, 0x80, 0x00, 0x88, 0xF0, 
	0x0E, 0x0E, 0x08, 0x08, 0x58, 0x40, 0x48, 0x48, 0x08, 0x83, 0x0C, 0x08, 0xC8, 0xC8, 0x08, 0x0D, 
	0x08, 0x08, 0x08, 0x78, 0x48, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x9F, 0x80, 0x80, 0x80, 0x00, 
	0x88, 0x00, 0x88, 0xDF, 0x80, 0x80, 0x80, 0x80, 0x70, 0x63, 0x80, 0x04, 0x08, 0xD8, 0x08, 0x8C, 
	0x0C, 0x08, 0x08, 0x08, 0x06, 0x08, 0x08, 0x86, 0x80, 0x80, 0x80, 0xF0, 0x08, 0x08, 0xD8, 0x48, 
	0x80, 0x80, 0x50, 0x80, 0xD0, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x80, 0x08, 0x80, 0x08, 0x80, 
	0x08, 0x80, 0x80, 0x80, 0xF0, 0xFF, 0x79, 0x80, 0x80, 0x05, 0x88, 0x00, 0x88, 0x8E, 0x80, 0x80, 
	0x0E, 0x08, 0x04, 0x08, 0x08, 0x08, 0x78, 0x00, 0x08, 0x08, 0xF8, 0x08, 0x08, 0xD8, 0x08, 0x58, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x70, 0x87, 0x80, 0xF0, 0x80, 0x80, 0x08, 
	0x80, 0x0F, 0x08, 0x08, 0x88, 0x00, 0x87, 0x00, 0x88, 0x86, 0x00, 0x88, 0x8C, 0x80, 0x80, 0x80, 
	0x8F, 0x08, 0x80, 0x08, 0x80, 0x08, 0x08, 0x37, 0x08, 0x88, 0x00, 0x88, 0x00, 0x88, 0x77, 0x08, 
	0x8D, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x08, 0x80, 0x08, 0x08, 0x08, 0x77, 
	0x0D, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x88, 0x80, 0x80, 0x80, 0x00, 0x08, 0x08, 0x78, 0x77, 
	0x07, 0x08, 0x08, 0x08, 0xAF, 0x80, 0x08, 0x80, 0x80, 0x08, 0x80, 0x08, 0x80, 0x08, 0x80, 0x80, 
	0x80, 0x77, 0x07, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0x9F, 0x80, 0x08, 0x80, 0x08, 
	0x80, 0x08, 0x78, 0x07, 0x08, 0x08, 0x08, 0x80, 0x08, 0x80, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xCF, 
	0x80, 0x08, 0x08, 0x80, 0x08, 0x80, 0x08, 0x70, 0x27, 0x08, 0x08, 0x88, 0x00, 0x88, 0x80, 0x80, 
	0x80, 0x80, 0x00, 0x08, 
};
