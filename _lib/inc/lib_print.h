
// ****************************************************************************
//
//                               Formatted print
//
// ****************************************************************************
// PicoLibSDK - Alternative SDK library for Raspberry Pico and RP2040
// Copyright (c) 2023 Miroslav Nemecek, Panda38@seznam.cz, hardyplotter2@gmail.com
// 	https://github.com/Panda381/PicoLibSDK
//	https://www.breatharian.eu/hw/picolibsdk/index_en.html
//	https://github.com/pajenicko/picopad
//	https://picopad.eu/en/
// License:
//	This source code is freely available for any purpose, including commercial.
//	It is possible to take and modify the code or parts of it, without restriction.

/*
  format:
%[flags][width][.precision][length]specifier


specifier
---------
% ... print character '%'
b ... print unsigned integer in BIN format (1011010111)
B ... print floating point as capacity in bytes, with unit prefix (3.45KB; alternative '#' with space 3.45 KB)
c ... print single-byte character
d or i ... print signed integer in DEC format (1234567)
E or e ... print floating point with exponent 'E' or 'e' ('exponent mode', -1.2345e+123)
		Trailing zeros are not reduced, or are reduced with the '#' flag.
F or f ... print floating point with fixed point ('fixed mode', -123.456)
		Trailing zeros are not reduced, or are reduced with the '#' flag.
G or g ... print floating point with automatic format selection (general mode)
		Trailing zeros are reduced, or are not reduced with the '#' flag.
o ... print unsigned integer in OCT format
P or p ... print pointer (upper or lower case, with prefix 0x). (0x0200457A)
s ... print ASCIIZ text (length can be limited with '.precision')
t ... print floating point in technical notation, with exponent 'e' in multiples of 3 (alternative '#' reduce zeroes)
T ... print floating point in technical notation, with prefix u, m, k, M, G,... (alternative '#' with space)
       If number is out of range 10^-30..10^+32, it changes to 't' format with exponent 'e'.
u ... print unsigned integer in DEC format
X or x ... print unsigned integer in HEX format, upper or lower case


flags
-----
' ... grouping separator, integer part of the number is grouped by 3 (or 4) digits, with a separator character '
(space) ... number will be preceded by a space instead of a '+' (ignored when '+' flag is specified)
# ... alternative form: 'Gg' without end-zero reduction, 'EeFft' with end-zero reduction,
	'Pp' without prefix 0x, Xxbo with printing prefix 0x 0b 0, 'BT' with space
- ... argument will be left-aligned in the 'width' field (otherwise the default is right-aligned)
+ ... the '+' sign is printed on a positive argument (otherwise only the '-' sign is displayed)
0 ... number is padded with zeros instead of spaces in the 'width' field on the left


width
-----
width ... number is minimum width of the field to display the argument (padded with spaces)
* ... the width is not specified in the format string, but is read from the argument.
	The negative value of the width is interpreted as the character '-' (i.e. a left-aligned argument).

precision
---------
.precision ... number after the point determines the precision: for 'bdiouXx' (integer) determines
      the minimum number of displayed digits (padded with leading zeros; default 1).
      For 'EeFf' specifies the number of decimal places (default 6). For 'BGgTt', it is the maximum number of
      printable significant digits. For 's' (text) it is the maximum number of characters displayed.
.* ... by specifying * instead of precision, the precision is read from the argument (absolute value is used).


In the case when '.*' is used, the precision is specified by an additional argument
of type 'int', which appears before the argument to be converted, but after
the argument supplying minimum field width if one is supplied with '*'.


length modifier
---------------
ll ... argument is 'long long int' (u64)


Special values of decimal number:
 infinity ... 'inf' or '-inf' ... 'INF'
 NaN ... 'nan' or '-nan' ... 'NAN'


va_list ... variadic functions (variable number of arguments)

*/

#if USE_PRINT		// use Formatted print (lib_print.c, lib_print.h)

#ifndef _PRINT_H
#define _PRINT_H

#include "lib_stream.h"
#include "../../_sdk/usb_inc/sdk_usb_dev_cdc.h"

#ifdef __cplusplus
extern "C" {
#endif

// bit mask of used stdio streams
extern u32 StdioMask;

// stream for memory printing
extern sStream MemStream;

// stream printing (returns number of characters ... text is not terminated with NUL)
//  wstr ... write stream (destination buffer)
//  rstr ... read stream (formatting string)
//  args ... arguments
u32 StreamPrintArg(sStream* wstr, sStream* rstr, va_list args);

#define SPRINTF_MAX	40	// default max. size of buffer in sprintf functions

// formatted print string into memory buffer, with argument list (returns number of characters, without terminating 0)
//  max ... size of destination buffer, including terminating 0
u32 MemPrintArg(char* buf, u32 max, const char* fmt, va_list args);
int vsprintf(char* buf, const char* fmt, va_list args);
int vsnprintf(char* buf, size_t max, const char* fmt, va_list args);

// formatted print string into memory buffer, with variadic arguments (returns number of characters, without terminating 0)
//  max ... size of destination buffer, including terminating 0
NOINLINE u32 MemPrint(char* buf, u32 max, const char* fmt, ...);
int sprintf(char* buf, const char* fmt, ...);
int snprintf(char* buf, size_t max, const char* fmt, ...);

// formatted print string into NUL to get result length, with argument list (returns number of characters)
u32 NulPrintArg(const char* fmt, va_list args);

// formatted print string into NUL to get result length, with variadic arguments (returns number of characters)
NOINLINE u32 NulPrint(const char* fmt, ...);

#if USE_USB_STDIO	// use USB stdio (UsbPrint function)
// formatted print string to USB, with argument list (returns number of characters)
u32 UsbPrintArg(const char* fmt, va_list args);

// formatted print string to USB, with variadic arguments (returns number of characters)
NOINLINE u32 UsbPrint(const char* fmt, ...);

// print character to USB
INLINE void UsbPrintChar(char ch) { UsbDevCdcWriteChar(ch); }

// print unformatted text to USB (returns number of characters)
u32 UsbPrintText(const char* txt);
#endif // USE_USB_STDIO

// stdio interface
#define STDIO_MASK_DRAW		B0	// display (use USE_DRAW_STDIO to enable)
#define STDIO_MASK_USB		B1	// USB port (use USE_USB_STDIO to enable)
#define STDIO_MASK_MEM		B2	// memory print
//#define STDIO_MASK_UART		B3	// UART port
//#define STDIO_MASK_FILE		B4	// file stdio

// start display printing (using printf function; must be enabled with USE_DRAW_STDIO)
INLINE void DrawPrintStart() { StdioMask |= STDIO_MASK_DRAW; }

// stop display printing
INLINE void DrawPrintStop() { StdioMask &= ~STDIO_MASK_DRAW; }

// start USB printing (using printf function; must be enabled with USE_USB_STDIO)
INLINE void UsbPrintStart() { StdioMask |= STDIO_MASK_USB; }

// stop USB printing
INLINE void UsbPrintStop() { StdioMask &= ~STDIO_MASK_USB; }

// start memory printing (using printf function)
//  max ... size of destination buffer, including terminating 0
void MemPrintStart(char* buf, u32 max);

// get current length of text in memory printing buffer
INLINE u32 MemPrintLen() { return MemStream.pos; }

// stop memory printing
INLINE void MemPrintStop() { StdioMask &= ~STDIO_MASK_MEM; }

// print character to print channels
void PrintChar(char ch);
INLINE void printchar(char ch) { PrintChar(ch); }
int putchar(int ch);

// print unformatted text to print channels
int PrintText(const char* txt);
INLINE int printtext(const char* txt) { return PrintText(txt); }

// print unformatted text with added new-line
int puts(const char* txt);

// formatted print to print channels
// - Do not print simultaneously from the program and from the interrupt handler!
//   If you really need it, use SpinLock lock to access it.
int PrintArg(const char* fmt, va_list args);
int vprintf(const char* fmt, va_list args);
int Print(const char* fmt, ...);
int printf(const char* fmt, ...);
int print(const char* fmt, ...);

// get character from stdio (returns NOCHAR=0 if no character)
char GetChar();
char getchar();

#ifdef __cplusplus
}
#endif

#endif // _STREAM_H

#endif // USE_PRINT		// use Formatted print (lib_print.c, lib_print.h)
