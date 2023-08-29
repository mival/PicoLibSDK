// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

// ------- //
// minivga //
// ------- //

#define minivga_wrap_target 11
#define minivga_wrap 15

#define minivga_offset_hsync 0u
#define minivga_offset_entry 1u
#define minivga_offset_vsync 3u
#define minivga_offset_vhsync 6u
#define minivga_offset_dark 9u
#define minivga_offset_output 13u
#define minivga_offset_extra 13u

static const uint16_t minivga_program_instructions[] = {
    0x1040, //  0: jmp    x--, 0          side 1     
    0x703b, //  1: out    x, 27           side 1     
    0x70a5, //  2: out    pc, 5           side 1     
    0x1043, //  3: jmp    x--, 3          side 1     
    0x703b, //  4: out    x, 27           side 1     
    0x70a5, //  5: out    pc, 5           side 1     
    0x0046, //  6: jmp    x--, 6          side 0     
    0x603b, //  7: out    x, 27           side 0     
    0x60a5, //  8: out    pc, 5           side 0     
    0xa003, //  9: mov    pins, null      side 0     
    0x004a, // 10: jmp    x--, 10         side 0     
            //     .wrap_target
    0x603b, // 11: out    x, 27           side 0     
    0x60a5, // 12: out    pc, 5           side 0     
    0x6004, // 13: out    pins, 4         side 0     
    0x004d, // 14: jmp    x--, 13         side 0     
    0xa003, // 15: mov    pins, null      side 0     
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program minivga_program = {
    .instructions = minivga_program_instructions,
    .length = 16,
    .origin = -1,
};

static inline pio_sm_config minivga_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + minivga_wrap_target, offset + minivga_wrap);
    sm_config_set_sideset(&c, 1, false, false);
    return c;
}
#endif

