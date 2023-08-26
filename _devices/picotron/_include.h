// PicoLibSDK - Alternative SDK library for Raspberry Pico and RP2040
// Copyright (c) 2023 Miroslav Nemecek, Panda38@seznam.cz, hardyplotter2@gmail.com
// 	https://github.com/Panda381/PicoLibSDK
//	https://www.breatharian.eu/hw/picolibsdk/index_en.html
//	https://github.com/pajenicko/picopad
//	https://picopad.eu/en/
// License:
//	This source code is freely available for any purpose, including commercial.
//	It is possible to take and modify the code or parts of it, without restriction.

#include "../../_display/minivga/minivga.h" // VGA display
#include "../../_lib/inc/lib_draw.h" // drawing to display buffer
#include "../../_lib/inc/lib_pwmsnd.h" // PWM sound
#include "picotron_bat.h"	// battery
#include "picotron_key.h"	// keyboard Picotron
#include "picotron_init.h"	// initialize
