#include "include.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 Beep2Snd[1764] = {
	0x80, 0x80, 0x81, 0x81, 0x82, 0x81, 0x80, 0x7E, 0x7D, 0x7C, 0x7B, 0x7C, 0x7E, 0x82, 0x84, 0x87, 
	0x88, 0x86, 0x83, 0x7F, 0x7B, 0x77, 0x75, 0x77, 0x7A, 0x80, 0x85, 0x8A, 0x8D, 0x8C, 0x88, 0x82, 
	0x7B, 0x74, 0x70, 0x70, 0x74, 0x7B, 0x83, 0x8C, 0x92, 0x93, 0x8F, 0x88, 0x7E, 0x74, 0x6C, 0x69, 
	0x6C, 0x73, 0x7F, 0x8A, 0x94, 0x99, 0x98, 0x90, 0x85, 0x77, 0x6C, 0x65, 0x64, 0x6B, 0x76, 0x85, 
	0x93, 0x9C, 0x9F, 0x9A, 0x8E, 0x7E, 0x6E, 0x62, 0x5D, 0x61, 0x6C, 0x7C, 0x8F, 0x9D, 0xA5, 0xA3, 
	0x99, 0x88, 0x75, 0x64, 0x59, 0x58, 0x61, 0x71, 0x86, 0x99, 0xA7, 0xAB, 0xA4, 0x94, 0x7F, 0x6A, 
	0x5A, 0x53, 0x58, 0x66, 0x7A, 0x90, 0xA2, 0xAB, 0xAA, 0x9E, 0x8A, 0x75, 0x61, 0x56, 0x54, 0x5D, 
	0x6F, 0x85, 0x99, 0xA8, 0xAC, 0xA6, 0x95, 0x80, 0x6B, 0x5A, 0x53, 0x57, 0x65, 0x7A, 0x8F, 0xA2, 
	0xAB, 0xAA, 0x9F, 0x8C, 0x76, 0x62, 0x56, 0x54, 0x5D, 0x6E, 0x84, 0x99, 0xA7, 0xAC, 0xA6, 0x97, 
	0x81, 0x6C, 0x5B, 0x54, 0x57, 0x64, 0x78, 0x8E, 0xA1, 0xAB, 0xAB, 0xA0, 0x8D, 0x77, 0x63, 0x56, 
	0x54, 0x5C, 0x6D, 0x83, 0x98, 0xA7, 0xAC, 0xA6, 0x97, 0x83, 0x6D, 0x5C, 0x54, 0x56, 0x63, 0x77, 
	0x8D, 0xA0, 0xAB, 0xAB, 0xA1, 0x8E, 0x79, 0x64, 0x57, 0x54, 0x5B, 0x6C, 0x81, 0x96, 0xA6, 0xAC, 
	0xA7, 0x99, 0x84, 0x6E, 0x5D, 0x54, 0x56, 0x62, 0x76, 0x8C, 0x9F, 0xAA, 0xAB, 0xA1, 0x8F, 0x79, 
	0x65, 0x58, 0x54, 0x5A, 0x6B, 0x80, 0x95, 0xA5, 0xAC, 0xA8, 0x99, 0x85, 0x6F, 0x5E, 0x54, 0x56, 
	0x61, 0x75, 0x8A, 0x9E, 0xAA, 0xAB, 0xA2, 0x90, 0x7B, 0x66, 0x58, 0x54, 0x5A, 0x6A, 0x7F, 0x94, 
	0xA4, 0xAC, 0xA8, 0x9B, 0x87, 0x71, 0x5F, 0x54, 0x56, 0x60, 0x73, 0x89, 0x9D, 0xA9, 0xAC, 0xA3, 
	0x92, 0x7C, 0x67, 0x58, 0x54, 0x5A, 0x69, 0x7E, 0x93, 0xA4, 0xAC, 0xA9, 0x9C, 0x88, 0x72, 0x5F, 
	0x55, 0x55, 0x60, 0x72, 0x88, 0x9C, 0xA9, 0xAB, 0xA4, 0x93, 0x7E, 0x68, 0x59, 0x54, 0x59, 0x68, 
	0x7C, 0x92, 0xA3, 0xAB, 0xA9, 0x9D, 0x89, 0x73, 0x60, 0x55, 0x55, 0x5F, 0x71, 0x87, 0x9B, 0xA9, 
	0xAC, 0xA4, 0x94, 0x7E, 0x69, 0x5A, 0x54, 0x58, 0x66, 0x7B, 0x91, 0xA2, 0xAC, 0xA9, 0x9D, 0x8A, 
	0x74, 0x61, 0x56, 0x54, 0x5E, 0x70, 0x86, 0x9A, 0xA8, 0xAC, 0xA5, 0x95, 0x80, 0x6A, 0x5A, 0x53, 
	0x57, 0x66, 0x7A, 0x8F, 0xA1, 0xAB, 0xAA, 0x9E, 0x8B, 0x76, 0x62, 0x56, 0x54, 0x5D, 0x6E, 0x84, 
	0x99, 0xA7, 0xAC, 0xA6, 0x96, 0x81, 0x6B, 0x5B, 0x54, 0x57, 0x64, 0x78, 0x8E, 0xA1, 0xAB, 0xAA, 
	0x9F, 0x8C, 0x77, 0x63, 0x57, 0x54, 0x5C, 0x6D, 0x83, 0x98, 0xA7, 0xAC, 0xA7, 0x97, 0x83, 0x6D, 
	0x5C, 0x54, 0x56, 0x63, 0x77, 0x8D, 0xA0, 0xAA, 0xAB, 0xA0, 0x8E, 0x78, 0x64, 0x57, 0x53, 0x5C, 
	0x6C, 0x82, 0x97, 0xA6, 0xAC, 0xA7, 0x98, 0x84, 0x6E, 0x5D, 0x54, 0x56, 0x63, 0x77, 0x8C, 0x9F, 
	0xAA, 0xAB, 0xA1, 0x8F, 0x79, 0x64, 0x57, 0x54, 0x5B, 0x6B, 0x80, 0x96, 0xA5, 0xAC, 0xA8, 0x99, 
	0x85, 0x6F, 0x5E, 0x54, 0x55, 0x62, 0x75, 0x8B, 0x9E, 0xAA, 0xAC, 0xA2, 0x90, 0x7A, 0x66, 0x58, 
	0x54, 0x5A, 0x6A, 0x7F, 0x95, 0xA5, 0xAC, 0xA8, 0x9A, 0x86, 0x71, 0x5E, 0x55, 0x55, 0x61, 0x74, 
	0x89, 0x9D, 0xA9, 0xAC, 0xA3, 0x91, 0x7B, 0x67, 0x59, 0x54, 0x5A, 0x69, 0x7E, 0x93, 0xA4, 0xAC, 
	0xA9, 0x9B, 0x87, 0x71, 0x5F, 0x55, 0x55, 0x60, 0x72, 0x88, 0x9C, 0xA9, 0xAC, 0xA4, 0x92, 0x7D, 
	0x68, 0x59, 0x53, 0x59, 0x68, 0x7D, 0x92, 0xA3, 0xAB, 0xA9, 0x9C, 0x88, 0x73, 0x60, 0x55, 0x55, 
	0x5F, 0x71, 0x87, 0x9B, 0xA9, 0xAC, 0xA4, 0x94, 0x7E, 0x69, 0x59, 0x54, 0x58, 0x67, 0x7C, 0x91, 
	0xA3, 0xAB, 0xAA, 0x9D, 0x8A, 0x74, 0x61, 0x55, 0x54, 0x5E, 0x70, 0x86, 0x9B, 0xA8, 0xAC, 0xA5, 
	0x95, 0x80, 0x6A, 0x5B, 0x53, 0x58, 0x66, 0x7A, 0x90, 0xA2, 0xAB, 0xAA, 0x9E, 0x8B, 0x75, 0x62, 
	0x56, 0x54, 0x5D, 0x6F, 0x85, 0x99, 0xA7, 0xAC, 0xA6, 0x96, 0x81, 0x6B, 0x5B, 0x54, 0x57, 0x65, 
	0x79, 0x8F, 0xA1, 0xAB, 0xAA, 0x9F, 0x8C, 0x77, 0x63, 0x56, 0x54, 0x5C, 0x6E, 0x84, 0x98, 0xA7, 
	0xAC, 0xA6, 0x97, 0x82, 0x6C, 0x5C, 0x54, 0x56, 0x64, 0x78, 0x8E, 0xA0, 0xAA, 0xAB, 0xA0, 0x8D, 
	0x78, 0x64, 0x56, 0x54, 0x5C, 0x6D, 0x82, 0x97, 0xA7, 0xAC, 0xA7, 0x98, 0x83, 0x6D, 0x5C, 0x54, 
	0x56, 0x63, 0x76, 0x8D, 0x9F, 0xAA, 0xAB, 0xA1, 0x8F, 0x79, 0x65, 0x57, 0x54, 0x5B, 0x6B, 0x81, 
	0x96, 0xA6, 0xAC, 0xA7, 0x99, 0x85, 0x6F, 0x5D, 0x54, 0x56, 0x62, 0x75, 0x8B, 0x9F, 0xAA, 0xAB, 
	0xA2, 0x90, 0x7A, 0x65, 0x57, 0x54, 0x5A, 0x6A, 0x80, 0x95, 0xA5, 0xAC, 0xA8, 0x9A, 0x86, 0x70, 
	0x5E, 0x54, 0x55, 0x61, 0x74, 0x8A, 0x9E, 0xA9, 0xAB, 0xA2, 0x91, 0x7B, 0x67, 0x58, 0x53, 0x5A, 
	0x69, 0x7F, 0x94, 0xA4, 0xAC, 0xA8, 0x9B, 0x87, 0x71, 0x5F, 0x55, 0x55, 0x60, 0x73, 0x89, 0x9D, 
	0xA9, 0xAB, 0xA4, 0x92, 0x7D, 0x68, 0x59, 0x54, 0x59, 0x68, 0x7D, 0x93, 0xA3, 0xAC, 0xA9, 0x9C, 
	0x88, 0x73, 0x5F, 0x55, 0x54, 0x5F, 0x72, 0x87, 0x9C, 0xA9, 0xAC, 0xA4, 0x94, 0x7E, 0x68, 0x59, 
	0x53, 0x59, 0x67, 0x7C, 0x91, 0xA3, 0xAC, 0xA9, 0x9D, 0x8A, 0x74, 0x61, 0x55, 0x54, 0x5F, 0x70, 
	0x86, 0x9B, 0xA8, 0xAC, 0xA4, 0x94, 0x7F, 0x6A, 0x5A, 0x54, 0x59, 0x67, 0x7B, 0x90, 0xA2, 0xAA, 
	0xA9, 0x9E, 0x8A, 0x75, 0x62, 0x57, 0x56, 0x5E, 0x70, 0x85, 0x98, 0xA7, 0xAA, 0xA4, 0x95, 0x80, 
	0x6B, 0x5C, 0x55, 0x59, 0x66, 0x79, 0x8F, 0xA0, 0xA9, 0xA8, 0x9D, 0x8B, 0x76, 0x64, 0x58, 0x56, 
	0x5E, 0x6F, 0x84, 0x97, 0xA5, 0xAA, 0xA4, 0x95, 0x82, 0x6D, 0x5E, 0x56, 0x59, 0x66, 0x79, 0x8D, 
	0x9E, 0xA8, 0xA7, 0x9E, 0x8C, 0x78, 0x66, 0x5A, 0x57, 0x5F, 0x6E, 0x82, 0x96, 0xA3, 0xA9, 0xA4, 
	0x96, 0x82, 0x6F, 0x5F, 0x58, 0x5A, 0x66, 0x78, 0x8C, 0x9C, 0xA7, 0xA7, 0x9E, 0x8D, 0x79, 0x67, 
	0x5B, 0x58, 0x5F, 0x6E, 0x81, 0x94, 0xA2, 0xA7, 0xA3, 0x96, 0x83, 0x70, 0x61, 0x59, 0x5B, 0x66, 
	0x77, 0x8B, 0x9B, 0xA5, 0xA6, 0x9E, 0x8E, 0x7B, 0x69, 0x5D, 0x59, 0x5F, 0x6E, 0x80, 0x93, 0xA0, 
	0xA6, 0xA3, 0x96, 0x85, 0x72, 0x62, 0x5A, 0x5B, 0x66, 0x76, 0x88, 0x99, 0xA4, 0xA5, 0x9D, 0x8E, 
	0x7C, 0x6A, 0x5E, 0x5A, 0x60, 0x6D, 0x7F, 0x91, 0x9F, 0xA5, 0xA2, 0x97, 0x85, 0x73, 0x64, 0x5B, 
	0x5C, 0x66, 0x75, 0x88, 0x98, 0xA2, 0xA4, 0x9D, 0x8F, 0x7D, 0x6C, 0x60, 0x5B, 0x60, 0x6C, 0x7E, 
	0x90, 0x9D, 0xA4, 0xA1, 0x97, 0x87, 0x74, 0x65, 0x5C, 0x5D, 0x66, 0x75, 0x86, 0x97, 0xA1, 0xA4, 
	0x9D, 0x8F, 0x7E, 0x6D, 0x61, 0x5C, 0x60, 0x6C, 0x7D, 0x8E, 0x9C, 0xA3, 0xA1, 0x97, 0x87, 0x76, 
	0x67, 0x5E, 0x5E, 0x66, 0x74, 0x85, 0x95, 0xA0, 0xA2, 0x9D, 0x90, 0x7F, 0x6F, 0x62, 0x5D, 0x61, 
	0x6C, 0x7C, 0x8D, 0x9A, 0xA2, 0xA0, 0x97, 0x88, 0x77, 0x69, 0x5F, 0x5F, 0x65, 0x74, 0x84, 0x93, 
	0x9E, 0xA1, 0x9C, 0x90, 0x80, 0x70, 0x64, 0x5F, 0x61, 0x6C, 0x7C, 0x8B, 0x99, 0xA0, 0x9F, 0x97, 
	0x88, 0x78, 0x69, 0x61, 0x60, 0x66, 0x73, 0x83, 0x93, 0x9D, 0xA0, 0x9C, 0x90, 0x81, 0x71, 0x65, 
	0x60, 0x62, 0x6C, 0x7A, 0x8B, 0x97, 0x9F, 0x9F, 0x97, 0x89, 0x79, 0x6B, 0x62, 0x60, 0x67, 0x73, 
	0x82, 0x90, 0x9C, 0x9F, 0x9C, 0x91, 0x82, 0x73, 0x66, 0x61, 0x63, 0x6C, 0x7A, 0x89, 0x96, 0x9D, 
	0x9D, 0x96, 0x89, 0x7B, 0x6C, 0x64, 0x61, 0x67, 0x73, 0x81, 0x90, 0x9A, 0x9E, 0x9B, 0x91, 0x82, 
	0x73, 0x68, 0x62, 0x64, 0x6C, 0x79, 0x88, 0x95, 0x9C, 0x9D, 0x96, 0x8A, 0x7B, 0x6E, 0x65, 0x62, 
	0x67, 0x72, 0x80, 0x8E, 0x99, 0x9D, 0x9A, 0x91, 0x83, 0x75, 0x69, 0x63, 0x64, 0x6C, 0x79, 0x87, 
	0x93, 0x9B, 0x9C, 0x96, 0x8A, 0x7C, 0x6F, 0x66, 0x63, 0x68, 0x72, 0x7F, 0x8D, 0x97, 0x9C, 0x99, 
	0x91, 0x84, 0x76, 0x6A, 0x64, 0x65, 0x6C, 0x78, 0x86, 0x92, 0x9A, 0x9B, 0x96, 0x8B, 0x7E, 0x70, 
	0x67, 0x64, 0x68, 0x72, 0x7E, 0x8C, 0x96, 0x9B, 0x99, 0x91, 0x85, 0x78, 0x6C, 0x66, 0x65, 0x6D, 
	0x78, 0x85, 0x91, 0x99, 0x9A, 0x95, 0x8B, 0x7E, 0x72, 0x69, 0x65, 0x69, 0x71, 0x7E, 0x8A, 0x95, 
	0x99, 0x98, 0x91, 0x85, 0x78, 0x6E, 0x67, 0x67, 0x6D, 0x77, 0x84, 0x90, 0x97, 0x99, 0x95, 0x8B, 
	0x7F, 0x73, 0x6A, 0x66, 0x69, 0x72, 0x7D, 0x89, 0x93, 0x98, 0x98, 0x90, 0x86, 0x79, 0x6E, 0x68, 
	0x67, 0x6D, 0x77, 0x83, 0x8E, 0x96, 0x98, 0x94, 0x8B, 0x80, 0x74, 0x6B, 0x68, 0x6A, 0x71, 0x7D, 
	0x88, 0x92, 0x97, 0x96, 0x90, 0x86, 0x7A, 0x70, 0x69, 0x69, 0x6D, 0x77, 0x82, 0x8D, 0x95, 0x97, 
	0x93, 0x8B, 0x81, 0x75, 0x6C, 0x68, 0x6A, 0x71, 0x7C, 0x87, 0x90, 0x96, 0x96, 0x90, 0x86, 0x7B, 
	0x71, 0x6B, 0x6A, 0x6E, 0x77, 0x81, 0x8C, 0x93, 0x96, 0x93, 0x8B, 0x81, 0x76, 0x6E, 0x6A, 0x6C, 
	0x72, 0x7C, 0x87, 0x90, 0x95, 0x95, 0x90, 0x87, 0x7C, 0x72, 0x6C, 0x6A, 0x6E, 0x77, 0x81, 0x8B, 
	0x92, 0x95, 0x92, 0x8B, 0x82, 0x77, 0x6F, 0x6B, 0x6C, 0x72, 0x7B, 0x86, 0x8E, 0x93, 0x94, 0x8F, 
	0x87, 0x7D, 0x73, 0x6D, 0x6C, 0x6F, 0x76, 0x80, 0x8A, 0x91, 0x94, 0x92, 0x8B, 0x82, 0x78, 0x70, 
	0x6D, 0x6D, 0x72, 0x7B, 0x84, 0x8D, 0x92, 0x93, 0x8F, 0x87, 0x7D, 0x74, 0x6E, 0x6C, 0x70, 0x76, 
	0x7F, 0x89, 0x90, 0x92, 0x91, 0x8B, 0x82, 0x79, 0x72, 0x6E, 0x6E, 0x73, 0x7B, 0x84, 0x8C, 0x91, 
	0x92, 0x8E, 0x87, 0x7E, 0x75, 0x70, 0x6E, 0x70, 0x76, 0x7F, 0x88, 0x8E, 0x91, 0x90, 0x8B, 0x83, 
	0x7A, 0x73, 0x6F, 0x6F, 0x73, 0x7A, 0x84, 0x8B, 0x90, 0x91, 0x8D, 0x87, 0x7E, 0x76, 0x71, 0x6F, 
	0x71, 0x77, 0x7E, 0x87, 0x8D, 0x90, 0x8F, 0x8A, 0x83, 0x7B, 0x73, 0x70, 0x70, 0x74, 0x7A, 0x83, 
	0x8A, 0x8F, 0x90, 0x8D, 0x87, 0x7F, 0x77, 0x72, 0x6F, 0x72, 0x77, 0x7E, 0x86, 0x8C, 0x8F, 0x8E, 
	0x8A, 0x83, 0x7C, 0x75, 0x71, 0x71, 0x74, 0x7A, 0x82, 0x89, 0x8D, 0x8F, 0x8D, 0x87, 0x80, 0x79, 
	0x73, 0x71, 0x73, 0x77, 0x7E, 0x85, 0x8B, 0x8E, 0x8D, 0x8A, 0x83, 0x7C, 0x76, 0x72, 0x72, 0x75, 
	0x7B, 0x81, 0x88, 0x8C, 0x8E, 0x8B, 0x87, 0x80, 0x79, 0x75, 0x72, 0x73, 0x78, 0x7E, 0x84, 0x8A, 
	0x8D, 0x8D, 0x89, 0x84, 0x7D, 0x77, 0x73, 0x73, 0x75, 0x7B, 0x81, 0x87, 0x8B, 0x8D, 0x8B, 0x86, 
	0x80, 0x7A, 0x75, 0x73, 0x74, 0x78, 0x7E, 0x84, 0x89, 0x8C, 0x8C, 0x89, 0x84, 0x7E, 0x78, 0x74, 
	0x74, 0x76, 0x7B, 0x80, 0x86, 0x8A, 0x8B, 0x8A, 0x86, 0x81, 0x7B, 0x77, 0x74, 0x75, 0x78, 0x7E, 
	0x83, 0x88, 0x8A, 0x8A, 0x88, 0x83, 0x7E, 0x79, 0x76, 0x75, 0x77, 0x7B, 0x80, 0x85, 0x89, 0x8A, 
	0x89, 0x86, 0x81, 0x7C, 0x77, 0x76, 0x76, 0x79, 0x7E, 0x82, 0x87, 0x89, 0x8A, 0x87, 0x83, 0x7E, 
	0x7A, 0x77, 0x76, 0x78, 0x7B, 0x80, 0x84, 0x88, 0x89, 0x88, 0x86, 0x81, 0x7C, 0x79, 0x77, 0x77, 
	0x79, 0x7D, 0x82, 0x86, 0x88, 0x89, 0x87, 0x83, 0x7F, 0x7B, 0x78, 0x77, 0x78, 0x7B, 0x80, 0x83, 
	0x87, 0x88, 0x88, 0x85, 0x81, 0x7D, 0x7A, 0x78, 0x78, 0x7A, 0x7D, 0x81, 0x85, 0x87, 0x88, 0x86, 
	0x83, 0x7F, 0x7B, 0x79, 0x78, 0x79, 0x7C, 0x7F, 0x83, 0x86, 0x87, 0x87, 0x84, 0x81, 0x7D, 0x7B, 
	0x78, 0x79, 0x7B, 0x7D, 0x81, 0x84, 0x86, 0x87, 0x86, 0x83, 0x7F, 0x7C, 0x7A, 0x79, 0x7A, 0x7D, 
	0x7F, 0x82, 0x85, 0x86, 0x86, 0x84, 0x81, 0x7E, 0x7C, 0x7A, 0x7A, 0x7B, 0x7D, 0x81, 0x83, 0x85, 
	0x85, 0x84, 0x83, 0x7F, 0x7D, 0x7B, 0x7A, 0x7B, 0x7D, 0x7F, 0x82, 0x84, 0x85, 0x85, 0x84, 0x81, 
	0x7E, 0x7C, 0x7B, 0x7B, 0x7C, 0x7E, 0x80, 0x82, 0x84, 0x84, 0x84, 0x82, 0x80, 0x7E, 0x7C, 0x7B, 
	0x7C, 0x7D, 0x7F, 0x81, 0x83, 0x84, 0x84, 0x83, 0x81, 0x7F, 0x7D, 0x7C, 0x7C, 0x7D, 0x7E, 0x80, 
	0x82, 0x83, 0x83, 0x83, 0x82, 0x80, 0x7E, 0x7D, 0x7C, 0x7D, 0x7E, 0x7F, 0x81, 0x82, 0x83, 0x83, 
	0x81, 0x80, 0x7F, 0x7E, 0x7D, 0x7D, 0x7E, 0x7E, 0x80, 0x81, 0x82, 0x82, 0x82, 0x81, 0x80, 0x7F, 
	0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x80, 0x81, 0x82, 0x82, 0x81, 0x80, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 
	0x7F, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 
	0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x80, 
};
