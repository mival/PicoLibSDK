// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

// -------- //
// pulsgram //
// -------- //

#define pulsgram_wrap_target 0
#define pulsgram_wrap 8

#define pulsgram_offset_start 0u

static const uint16_t pulsgram_program_instructions[] = {
            //     .wrap_target
    0xa02b, //  0: mov    x, !null                   
    0x0042, //  1: jmp    x--, 2                     
    0x00c1, //  2: jmp    pin, 1                     
    0x4020, //  3: in     x, 32                      
    0xa02b, //  4: mov    x, !null                   
    0x00c7, //  5: jmp    pin, 7                     
    0x0045, //  6: jmp    x--, 5                     
    0x4020, //  7: in     x, 32                      
    0x0000, //  8: jmp    0                          
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pulsgram_program = {
    .instructions = pulsgram_program_instructions,
    .length = 9,
    .origin = -1,
};

static inline pio_sm_config pulsgram_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pulsgram_wrap_target, offset + pulsgram_wrap);
    return c;
}
#endif

