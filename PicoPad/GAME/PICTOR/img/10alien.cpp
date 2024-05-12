#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 80 pixels
// image height: 33 lines
// image pitch: 80 bytes
const u16 AlienImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0x6A8A, 0x732D, 0x6AAB, 0x72CB, 0xFFFF, 0x7C11, 0xDF3F, 0xDF3F, 0xDF3E, 0xE77F, 0xD73F, 0xD73F, 0xDF5F, 0xD73E, 0xDF5F, 
	0x634E, 0xCF1F, 0xCF1F, 0xD73F, 0xC71F, 0xCF3F, 0xCF3F, 0xCF1E, 0xBEBC, 0x8C72, 0x8DB9, 0x5C53, 0x8E7C, 0x8E1B, 0x965C, 0x9E7C, 
	0xAF1F, 0x9E5B, 0x7598, 0x9EFE, 0x9EBD, 0xA6FE, 0xA6FE, 0x8598, 0x6DDA, 0x64D5, 0x9EFE, 0x96DE, 0x9EFE, 0x96BD, 0x9EFE, 0x9EFE, 
	0xAF1E, 0xCF3D, 0x7D77, 0xA71E, 0xA71E, 0xA73E, 0xA6DD, 0x9EDD, 0x9F1E, 0xA73E, 0xA71E, 0x9EFD, 0x9EBC, 0xA73E, 0x8619, 0xA75E, 
	0x9EFC, 0xAF1D, 0x8576, 0x7DD8, 0x7D35, 0xAE59, 0x5D14, 0x9EDB, 0x5471, 0xAEDB, 0x7534, 0x9699, 0xA71B, 0x86BA, 0x8EB9, 0x9658, 
	0x6D94, 0xA637, 0x74F2, 0x871A, 0x8637, 0x6CF2, 0x9E17, 0x6D53, 0x9DF6, 0x7F59, 0x7696, 0x8F59, 0x85F5, 0x5592, 0x7DD4, 0x8697, 
	0x95D5, 0x7573, 0x7757, 0x6592, 0x7D93, 0x3C4C, 0x6EB5, 0x64D0, 0x7674, 0x7613, 0x9F58, 0x8F98, 0x44EE, 0x54AE, 0x448D, 0x5570, 
	0x8777, 0x7E54, 0x7E13, 0x9737, 0x9FB8, 0xA7B9, 0x344B, 0x4D4E, 0x552F, 0x6E32, 0x6570, 0x5C8E, 0x96B6, 0xAFB9, 0xB7BA, 0x4DCF, 
	0x6651, 0x5DD0, 0x76F4, 0x7673, 0x53EC, 0x8E75, 0x8572, 0xC7BB, 0x44ED, 0x3C0A, 0x6611, 0x5D2F, 0x8F36, 0x8674, 0xA758, 0x52AA, 
	0x5D8F, 0x5D4F, 0x7EB3, 0x8653, 0x9756, 0x9F77, 0x96D5, 0xA757, 0x7672, 0x654F, 0x6DB0, 0x86F4, 0x75D1, 0x546D, 0xAF98, 0x7D51, 
	0xB799, 0x7E73, 0x9F16, 0x656F, 0x5D2E, 0x64CE, 0x5CCD, 0x650E, 0x6D0F, 0x6D2F, 0x7DF2, 0x5CAD, 0x658F, 0x7E31, 0x6D6F, 0x54EC, 
	0x5C8C, 0x6D2E, 0x54AC, 0x5CCC, 0x5CAC, 0x5C6C, 0x5C8C, 0x64ED, 0xBFB8, 0x544B, 0x548B, 0x5CAC, 0x650D, 0x6D4E, 0x64AD, 0x546B, 
	0x542A, 0x542B, 0x64ED, 0x546B, 0x5C6B, 0x544B, 0x5D4C, 0x4C4A, 0x546A, 0x544B, 0x5C8C, 0x4C29, 0x546A, 0x546B, 0x4409, 0x4C49, 
	0x4C29, 0x544A, 0x64AC, 0x548A, 0x546A, 0x5C8B, 0x4428, 0x4C29, 0x3BE7, 0x43E7, 0x43E7, 0x4408, 0x4408, 0x4408, 0x4C08, 0x4C29, 
	0x4C29, 0x4C09, 0x546A, 0x544A, 0x5C0B, 0x96D0, 0x9EB1, 0x5B8A, 0x6D49, 0x63CA, 0x8E6D, 0xBF32, 0x54A2, 0x7C2E, 0x9DE9, 0xA646, 
	0xA625, 0xBEAC, 0xBEA3, 0xBEA5, 0xC6C7, 0xD74B, 0xD705, 0xF7AD, 0xFFD1, 0xACF2, 0x3944, 0xAD13, 0x41A6, 0x83CE, 0x6269, 0x6B0C, 
};

const u8 AlienImg[2640] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xB3, 0xD1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCE, 
	0xA5, 0x54, 0x4E, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0x61, 0x40, 
	0x3F, 0x47, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0xC8, 0xA5, 0xBE, 
	0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x67, 0x21, 0x3A, 0x3D, 
	0x41, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xD9, 0xC4, 0xA8, 0xB7, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDA, 0x9F, 0x18, 0x11, 0x11, 0x11, 
	0x14, 0x45, 0xB7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x4A, 0x36, 0x3B, 0x3A, 0x3D, 
	0xA9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xDB, 0x86, 0x18, 0x11, 0x12, 0x11, 0x11, 0x45, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD6, 0x45, 0x0D, 0x0D, 0x0D, 0x09, 0x08, 
	0x0C, 0x13, 0x11, 0x56, 0xDD, 0x00, 0x00, 0x00, 0x00, 0xD6, 0x44, 0x36, 0x37, 0x3B, 0x34, 0x4B, 
	0xD9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xD6, 0x45, 0x0D, 0x0D, 0x0D, 0x08, 0x08, 0x0C, 0x0C, 0x11, 0x51, 0xD6, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0x9D, 0x67, 0x61, 0x61, 0x5E, 0x9C, 0xD9, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x09, 0x0D, 0x05, 0x0A, 0x07, 0x13, 
	0x13, 0x0B, 0x0B, 0x12, 0x45, 0xDB, 0x00, 0x00, 0xDA, 0x44, 0x36, 0x37, 0x2C, 0x2F, 0x33, 0xA8, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x51, 0x09, 0x0D, 0x05, 0x0A, 0x07, 0x15, 0x15, 0x0B, 0x0B, 0x12, 0x45, 0xDC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xDB, 0x7B, 0x42, 0x1F, 0x41, 0x3D, 0x3F, 0x3F, 0x5C, 0xC7, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0x0F, 0x09, 0x08, 0x0F, 0x41, 0x53, 0x59, 
	0x5B, 0x5B, 0x4C, 0x16, 0x16, 0x44, 0xB9, 0x00, 0x52, 0x36, 0x2B, 0x2B, 0x2C, 0x2D, 0x2D, 0xD6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xCD, 0x0A, 0x09, 0x08, 0x0F, 0x41, 0x53, 0x59, 0x5B, 0x5B, 0x4C, 0x16, 0x16, 0x44, 0xBF, 0x00, 
	0x00, 0x00, 0x00, 0xD8, 0x7B, 0x1A, 0x36, 0x3B, 0x3B, 0x3A, 0x3D, 0x47, 0xBB, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x0A, 0x08, 0x0E, 0x53, 0x62, 0x6B, 0x74, 
	0x4D, 0x75, 0x74, 0x6A, 0x49, 0x9A, 0x22, 0xB0, 0x1F, 0x2C, 0x2B, 0x2A, 0x1D, 0x3E, 0x47, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x86, 0x0A, 0x08, 0x0E, 0x53, 0x62, 0x6B, 0x74, 0x4D, 0x75, 0x74, 0x6A, 0x49, 0x9A, 0x22, 0xDB, 
	0x00, 0x00, 0xC7, 0x44, 0x36, 0x37, 0x37, 0x3B, 0x2F, 0x33, 0x4B, 0xD7, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x0E, 0x0F, 0x4E, 0x62, 0x6B, 0x75, 0x7D, 
	0x7E, 0xEB, 0xF4, 0xF4, 0xE6, 0xAD, 0x47, 0x1D, 0x26, 0x23, 0x2A, 0x1D, 0x3E, 0x33, 0x4F, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x58, 0x0E, 0x07, 0x4E, 0x62, 0x6B, 0x75, 0x7D, 0x7E, 0xEB, 0xF4, 0xF4, 0xE6, 0xAD, 0x47, 0x7B, 
	0x00, 0xB5, 0x1A, 0x25, 0x37, 0x2B, 0x2C, 0x2F, 0x34, 0x4B, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0E, 0x17, 0x66, 0x70, 0x74, 0x7D, 0x7E, 
	0x87, 0xF5, 0xF8, 0xEE, 0xF4, 0xE6, 0x79, 0x28, 0x2F, 0x2F, 0x1C, 0x43, 0x38, 0x33, 0x54, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x60, 0x0E, 0x17, 0x66, 0x70, 0x74, 0x7D, 0x7E, 0x87, 0xF5, 0xF8, 0xEE, 0xF4, 0xE6, 0x8A, 0x48, 
	0x7B, 0x21, 0x26, 0x2C, 0x2B, 0x2A, 0x2B, 0x1D, 0x2D, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9F, 0x0E, 0x49, 0x68, 0x5A, 0x74, 0x75, 0x7E, 
	0x87, 0xF5, 0xF7, 0xEC, 0xF3, 0xE6, 0x6F, 0x22, 0x25, 0x24, 0x32, 0x33, 0x35, 0x35, 0x5E, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x9F, 0x0E, 0x49, 0x68, 0x5A, 0x74, 0x75, 0x7E, 0x87, 0xF5, 0xF7, 0xEC, 0xF3, 0xE6, 0x6F, 0x1B, 
	0x21, 0x3B, 0x2F, 0x23, 0x23, 0x22, 0x43, 0x3A, 0x5C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD1, 0x13, 0x49, 0x79, 0xEA, 0xE5, 0x95, 0x9E, 
	0xA0, 0xEB, 0xF6, 0xF6, 0xF1, 0xA2, 0x5F, 0x2F, 0x26, 0x32, 0x3A, 0x3B, 0x64, 0xC7, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xC7, 0x13, 0x49, 0x79, 0xEA, 0xE5, 0x95, 0x9E, 0xA0, 0xEB, 0xF6, 0xF6, 0xF1, 0xA2, 0x61, 0x1D, 
	0x37, 0x25, 0x2E, 0x1E, 0x32, 0x3C, 0x33, 0x35, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x31, 0xC6, 0xF2, 0xF5, 0xEF, 0xE6, 
	0x97, 0xA0, 0xB8, 0x9E, 0xA2, 0xA1, 0x4E, 0x20, 0x1A, 0x3C, 0x64, 0xD6, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x58, 0x31, 0xC6, 0xF3, 0xF5, 0xF0, 0xE5, 0x97, 0xA0, 0xB8, 0x9E, 0xA2, 0xA1, 0x3E, 0x25, 
	0x26, 0x26, 0x22, 0x3E, 0x33, 0x33, 0x35, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xDA, 0x9D, 0x67, 0x55, 0x55, 0x52, 0x54, 0xA3, 0xF2, 0xF0, 0xEC, 0xF3, 
	0x9B, 0x94, 0x8C, 0xA1, 0x92, 0x79, 0x2F, 0x1F, 0x5C, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xDC, 0x54, 0xA3, 0xF2, 0xF0, 0xEC, 0xF3, 0x9B, 0x94, 0x8C, 0xA1, 0x92, 0x79, 0x30, 0x26, 
	0x25, 0x32, 0x36, 0x34, 0x4B, 0x54, 0x5C, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCE, 0x55, 0x1E, 0x34, 0x38, 0x2A, 0x2A, 0x2A, 0x1C, 0x71, 0xE8, 0xF2, 0xF6, 0xEA, 
	0x9B, 0x92, 0x98, 0x82, 0x80, 0x4E, 0x41, 0x5E, 0xBC, 0xB3, 0x9A, 0x93, 0x9C, 0x93, 0x9C, 0xAC, 
	0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x57, 0x71, 0xE8, 0xF2, 0xF6, 0xEA, 0x92, 0x92, 0x98, 0x82, 0x80, 0x4E, 0x40, 0x4C, 
	0x43, 0x4B, 0x5F, 0x8D, 0x9C, 0x8D, 0xAD, 0xAC, 0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xD9, 0xA5, 0x40, 0x39, 0x39, 0x38, 0x38, 0x2E, 0x2E, 0x2E, 0x2E, 0x28, 0x65, 0x9A, 0xAD, 0x98, 
	0x8A, 0x81, 0x80, 0x81, 0x6F, 0x71, 0x73, 0x83, 0x9A, 0xB1, 0xBC, 0xCD, 0xD8, 0xD2, 0xAE, 0xD2, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCB, 0x46, 0x65, 0x7A, 0xAD, 0x98, 0x8A, 0x81, 0x80, 0x7F, 0x77, 0x71, 0x73, 0x83, 
	0x9A, 0xBC, 0xBC, 0xC8, 0xD8, 0xD5, 0xBD, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x61, 0x54, 0x5C, 0x5E, 0x64, 0x61, 0x3E, 0x1C, 0x1C, 0x1D, 0x1A, 0x27, 0x1B, 0x48, 0x6D, 0x89, 
	0x89, 0x6C, 0x5D, 0x76, 0x90, 0xA2, 0x8D, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB9, 
	0x55, 0x29, 0x22, 0x32, 0x1B, 0x48, 0x6D, 0x89, 0x89, 0x6C, 0x5D, 0x65, 0x90, 0xA2, 0x8D, 0xD6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x19, 0x19, 0xF9, 0x02, 0x01, 0xFE, 0x01, 0xFF, 0x02, 
	0x03, 0x10, 0x67, 0x88, 0x69, 0x29, 0x9E, 0xAA, 0x00, 0xBA, 0x67, 0xC7, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCB, 0x52, 0x06, 
	0x19, 0xFB, 0x02, 0x01, 0xFE, 0x01, 0xFF, 0x02, 0xFF, 0x10, 0x50, 0x88, 0x69, 0x29, 0x9E, 0xAA, 
	0x00, 0xB2, 0x67, 0xB9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xED, 0xF9, 0xFB, 0xFD, 0xFE, 0x01, 0x03, 0xFD, 0xFB, 0xFD, 
	0xFD, 0x8F, 0x76, 0x65, 0x63, 0x7C, 0x8E, 0x8E, 0x85, 0x3E, 0x3E, 0x1E, 0xA5, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x1D, 0x19, 0xF9, 
	0xF9, 0x02, 0xFE, 0x01, 0x03, 0xFD, 0xFB, 0xFD, 0xFD, 0x8F, 0x76, 0x65, 0x63, 0x7C, 0x8E, 0x8E, 
	0x7C, 0x3E, 0x3E, 0x1E, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE4, 0xFC, 0xFA, 0xFA, 0xFC, 0xFE, 0x01, 0x04, 0x02, 0x8F, 0xE7, 
	0xE9, 0xCA, 0x76, 0xE0, 0x9A, 0x8D, 0x96, 0xA2, 0x8E, 0x85, 0xAA, 0xBA, 0x4A, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x3C, 0x27, 0xFC, 0xFA, 
	0xFA, 0xFC, 0xFE, 0x01, 0x04, 0x02, 0x8F, 0xE7, 0xE9, 0xCA, 0x76, 0xDF, 0x9A, 0x8D, 0x96, 0xA2, 
	0x8E, 0x85, 0xAA, 0xBA, 0x4A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDE, 0xE9, 0xE7, 0xE7, 0xE7, 0xE9, 0x84, 0x8F, 0x84, 0xA8, 
	0x99, 0x77, 0xD4, 0x00, 0xD5, 0x9A, 0x93, 0x96, 0x96, 0x9C, 0x9E, 0x96, 0xC3, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCB, 0x47, 0x3B, 0x5C, 0xB4, 0xE9, 
	0xE7, 0xE7, 0xE9, 0x67, 0x84, 0x8F, 0x84, 0xA9, 0x99, 0x77, 0xE3, 0x00, 0xD5, 0x7A, 0x93, 0x96, 
	0x96, 0x9C, 0x9E, 0x96, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0xB2, 0xAF, 0xD2, 
	0xC3, 0xDE, 0x00, 0x00, 0x00, 0x4A, 0x78, 0x7A, 0x72, 0x8B, 0x9B, 0x9E, 0xAA, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA7, 0xA8, 0xDA, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xD7, 0xB2, 0xAF, 0xD5, 0xCC, 0xDD, 0x00, 0x00, 0x00, 0x4A, 0x78, 0x7A, 
	0x72, 0x8B, 0x9B, 0x9E, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0xA5, 0x6E, 0x6E, 0x76, 0xA7, 0x8C, 0x95, 0xD7, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0xA5, 0x6E, 
	0x6E, 0x76, 0xA7, 0x8C, 0x95, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xAB, 0xB5, 0xA9, 0x98, 0x7F, 0xA4, 0xA7, 0x9B, 0x93, 0x9C, 0xAE, 
	0x9C, 0xC2, 0xDB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xB5, 0xA9, 
	0x98, 0x7F, 0xA4, 0xA7, 0x9B, 0x93, 0x9C, 0xAE, 0x9C, 0xB7, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDB, 0xA4, 0x92, 0x80, 0xB7, 0xC5, 0x99, 0x91, 0xA6, 
	0xA6, 0x82, 0x92, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDB, 
	0xA7, 0x92, 0x80, 0xB7, 0xC9, 0x99, 0x91, 0xA6, 0xA6, 0x82, 0x82, 0xD6, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB5, 0x81, 0x80, 0xB4, 0xDC, 0x00, 0x00, 
	0x00, 0xD0, 0xBA, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xC4, 0x81, 0x80, 0xB4, 0xDC, 0x00, 0x00, 0x00, 0xE1, 0xBA, 0xDD, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDA, 0xCA, 0x8B, 0x90, 0xD4, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xDA, 0xCA, 0x8B, 0x90, 0xD3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD9, 0xB0, 0x81, 0xC2, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xD8, 0xB6, 0x81, 0xBC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0x79, 
	0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 0x79, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB1, 
	0xAD, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB1, 0xAD, 0xD9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 
	0x8B, 0xE2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0xA4, 0xE2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
