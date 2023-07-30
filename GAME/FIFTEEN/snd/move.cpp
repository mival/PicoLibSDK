#include "include.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 MoveSnd[2354] = {
	0x80, 0x7F, 0x81, 0x80, 0x7F, 0x7F, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 
	0x7E, 0x7D, 0x7F, 0x80, 0x80, 0x81, 0x82, 0x84, 0x82, 0x80, 0x7E, 0x7F, 0x7F, 0x7E, 0x7E, 0x80, 
	0x82, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x82, 0x82, 0x82, 0x82, 0x80, 0x7E, 0x7E, 
	0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x7F, 0x7F, 0x80, 0x81, 
	0x80, 0x80, 0x81, 0x82, 0x81, 0x7F, 0x80, 0x80, 0x81, 0x7F, 0x7F, 0x7F, 0x81, 0x80, 0x7E, 0x80, 
	0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x82, 0x83, 0x81, 0x81, 0x80, 0x81, 0x81, 0x7F, 
	0x81, 0x82, 0x83, 0x81, 0x81, 0x82, 0x81, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7D, 0x7F, 0x81, 0x80, 
	0x80, 0x81, 0x82, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x81, 0x81, 0x80, 0x81, 0x81, 
	0x81, 0x82, 0x81, 0x81, 0x83, 0x81, 0x81, 0x81, 0x81, 0x82, 0x81, 0x81, 0x82, 0x81, 0x81, 0x80, 
	0x80, 0x81, 0x81, 0x80, 0x80, 0x82, 0x81, 0x80, 0x80, 0x7F, 0x81, 0x80, 0x7F, 0x80, 0x81, 0x80, 
	0x80, 0x80, 0x81, 0x81, 0x82, 0x81, 0x81, 0x81, 0x80, 0x7F, 0x81, 0x80, 0x81, 0x80, 0x80, 0x81, 
	0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x82, 0x81, 0x82, 0x82, 0x81, 0x81, 0x80, 
	0x81, 0x80, 0x81, 0x81, 0x82, 0x83, 0x81, 0x82, 0x81, 0x80, 0x80, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 
	0x80, 0x7F, 0x81, 0x81, 0x81, 0x82, 0x82, 0x83, 0x83, 0x83, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x84, 0x83, 0x7A, 0x7D, 0x8B, 0x8C, 0x8B, 0x75, 0x5C, 0x6A, 0x3F, 0x04, 0x1A, 0x4A, 
	0x86, 0x9F, 0xB9, 0xF2, 0xFF, 0xD6, 0x96, 0x94, 0xAA, 0x89, 0x54, 0x62, 0x88, 0x8C, 0x64, 0x51, 
	0x80, 0x9F, 0x83, 0x57, 0x6B, 0x8D, 0x93, 0x6C, 0x5A, 0x7E, 0x94, 0x82, 0x66, 0x73, 0x88, 0x86, 
	0x6B, 0x6C, 0x8C, 0x9F, 0x8D, 0x76, 0x81, 0x90, 0x8D, 0x70, 0x66, 0x73, 0x76, 0x64, 0x5E, 0x6E, 
	0x85, 0x85, 0x76, 0x84, 0x99, 0x9E, 0x8E, 0x81, 0x89, 0x94, 0x89, 0x79, 0x79, 0x84, 0x89, 0x80, 
	0x7A, 0x80, 0x89, 0x86, 0x7E, 0x7D, 0x84, 0x8A, 0x82, 0x7C, 0x82, 0x89, 0x88, 0x7E, 0x79, 0x80, 
	0x84, 0x80, 0x7E, 0x80, 0x86, 0x84, 0x7E, 0x7E, 0x85, 0x86, 0x82, 0x7F, 0x82, 0x89, 0x85, 0x7E, 
	0x7F, 0x83, 0x83, 0x7F, 0x7B, 0x7F, 0x86, 0x83, 0x7E, 0x80, 0x85, 0x86, 0x80, 0x7C, 0x81, 0x84, 
	0x7F, 0x7A, 0x7A, 0x7B, 0x7B, 0x78, 0x75, 0x79, 0x7F, 0x7B, 0x7E, 0x83, 0x88, 0x8C, 0x8E, 0x90, 
	0x95, 0x97, 0x94, 0x90, 0x8D, 0x8B, 0x88, 0x84, 0x82, 0x83, 0x85, 0x83, 0x81, 0x81, 0x82, 0x81, 
	0x7F, 0x7F, 0x82, 0x83, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x83, 0x84, 0x81, 0x82, 0x84, 
	0x88, 0x87, 0x87, 0x88, 0x88, 0x85, 0x85, 0x85, 0x84, 0x82, 0x80, 0x82, 0x85, 0x83, 0x7F, 0x7F, 
	0x7F, 0x7E, 0x7C, 0x7B, 0x80, 0x83, 0x83, 0x83, 0x86, 0x87, 0x86, 0x82, 0x81, 0x84, 0x84, 0x83, 
	0x83, 0x84, 0x87, 0x85, 0x81, 0x7F, 0x80, 0x81, 0x7F, 0x7E, 0x7E, 0x81, 0x80, 0x7D, 0x7B, 0x7C, 
	0x7D, 0x7B, 0x79, 0x79, 0x7B, 0x7B, 0x7A, 0x79, 0x7B, 0x79, 0x79, 0x79, 0x7C, 0x7E, 0x7F, 0x81, 
	0x81, 0x83, 0x81, 0x7E, 0x7D, 0x7F, 0x7C, 0x7B, 0x7A, 0x7B, 0x7C, 0x7B, 0x7C, 0x7D, 0x7D, 0x7C, 
	0x7B, 0x7B, 0x7C, 0x7C, 0x7D, 0x7D, 0x7C, 0x7C, 0x7B, 0x79, 0x7A, 0x79, 0x79, 0x7B, 0x7B, 0x7A, 
	0x7C, 0x7D, 0x7E, 0x7D, 0x7C, 0x7B, 0x7D, 0x7C, 0x7C, 0x7B, 0x7B, 0x7A, 0x79, 0x78, 0x79, 0x78, 
	0x79, 0x7A, 0x79, 0x7B, 0x7B, 0x7C, 0x7B, 0x7C, 0x7C, 0x7D, 0x7D, 0x7D, 0x7D, 0x7E, 0x7E, 0x7D, 
	0x7C, 0x7D, 0x7D, 0x7C, 0x7D, 0x7B, 0x7D, 0x7D, 0x7B, 0x7C, 0x7D, 0x7F, 0x7E, 0x7C, 0x7D, 0x7E, 
	0x7E, 0x7D, 0x7C, 0x7E, 0x7D, 0x7D, 0x7C, 0x7C, 0x7F, 0x7F, 0x7E, 0x7E, 0x80, 0x80, 0x7F, 0x7E, 
	0x7F, 0x80, 0x7F, 0x7E, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x82, 0x83, 0x82, 0x81, 0x81, 0x81, 0x80, 
	0x7F, 0x7E, 0x80, 0x7F, 0x7E, 0x7D, 0x7E, 0x7D, 0x7D, 0x7C, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7E, 0x7E, 0x7D, 0x7D, 0x7E, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7D, 0x7E, 0x7C, 0x7E, 
	0x7E, 0x7E, 0x80, 0x82, 0x82, 0x83, 0x83, 0x83, 0x82, 0x7F, 0x7F, 0x7E, 0x7D, 0x7D, 0x7E, 0x7E, 
	0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7C, 0x7D, 0x7F, 0x80, 0x82, 0x83, 0x84, 0x82, 0x83, 
	0x83, 0x82, 0x83, 0x82, 0x81, 0x82, 0x81, 0x81, 0x80, 0x7F, 0x7D, 0x7D, 0x7C, 0x7D, 0x7F, 0x82, 
	0x84, 0x87, 0x89, 0x8B, 0x8C, 0x8A, 0x86, 0x83, 0x81, 0x80, 0x7C, 0x7C, 0x7D, 0x7E, 0x7E, 0x7F, 
	0x80, 0x81, 0x81, 0x81, 0x82, 0x84, 0x84, 0x84, 0x84, 0x85, 0x85, 0x84, 0x83, 0x83, 0x83, 0x82, 
	0x82, 0x83, 0x85, 0x84, 0x84, 0x84, 0x84, 0x84, 0x83, 0x82, 0x83, 0x82, 0x81, 0x82, 0x83, 0x83, 
	0x83, 0x82, 0x83, 0x85, 0x85, 0x84, 0x85, 0x84, 0x84, 0x83, 0x83, 0x84, 0x84, 0x83, 0x82, 0x83, 
	0x83, 0x85, 0x84, 0x86, 0x86, 0x86, 0x85, 0x84, 0x84, 0x84, 0x84, 0x83, 0x82, 0x82, 0x82, 0x82, 
	0x82, 0x83, 0x83, 0x84, 0x84, 0x84, 0x86, 0x86, 0x86, 0x86, 0x86, 0x85, 0x85, 0x84, 0x83, 0x82, 
	0x82, 0x83, 0x83, 0x83, 0x82, 0x83, 0x83, 0x83, 0x84, 0x85, 0x85, 0x86, 0x86, 0x87, 0x87, 0x86, 
	0x85, 0x83, 0x83, 0x84, 0x83, 0x82, 0x83, 0x83, 0x84, 0x84, 0x85, 0x85, 0x84, 0x84, 0x84, 0x83, 
	0x82, 0x83, 0x82, 0x83, 0x83, 0x82, 0x83, 0x84, 0x83, 0x82, 0x83, 0x82, 0x83, 0x82, 0x82, 0x82, 
	0x84, 0x84, 0x83, 0x83, 0x83, 0x82, 0x81, 0x82, 0x81, 0x82, 0x81, 0x81, 0x82, 0x83, 0x84, 0x84, 
	0x84, 0x84, 0x84, 0x84, 0x83, 0x84, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 
	0x80, 0x81, 0x80, 0x7F, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 
	0x80, 0x80, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7E, 
	0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7E, 0x7E, 
	0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7D, 0x7E, 0x7E, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7D, 0x7D, 0x7E, 0x7D, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7D, 0x7E, 0x7E, 0x7D, 0x7D, 0x7D, 0x7E, 0x7E, 0x7F, 0x7D, 0x7D, 0x7E, 0x7E, 0x7E, 0x7F, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7E, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 
	0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7E, 
	0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 
	0x7F, 0x7E, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 
	0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 
	0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81, 
	0x81, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x81, 
	0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 
	0x80, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x7F, 
	0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x81, 
	0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x82, 0x81, 0x82, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 
	0x81, 0x81, 0x81, 0x82, 0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x81, 0x81, 0x81, 0x81, 0x80, 0x82, 0x81, 0x82, 0x81, 0x81, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x82, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 
	0x81, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x81, 
	0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 
	0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x81, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x7F, 0x81, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 
	0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 
	0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 
	0x81, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 
	0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 
	0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x81, 0x81, 
	0x7F, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 
	0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 
	0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 
	0x81, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 
	0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x80, 0x81, 0x80, 0x81, 0x80, 0x7F, 0x81, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 
};
