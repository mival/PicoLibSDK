
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************
// Control RGB LEDs using APA102

#include "../include.h"

#define PIN_CLK 2
#define PIN_DIN 3

#define N_LEDS 150
#define SERIAL_FREQ (5 * 1000 * 1000)

// Global brightness value 0->31
#define BRIGHTNESS 16

void put_start_frame(PIO pio, uint sm)
{
	pio_sm_put_blocking(pio, sm, 0u);
}

void put_end_frame(PIO pio, uint sm)
{
	pio_sm_put_blocking(pio, sm, ~0u);
}

void put_rgb888(PIO pio, uint sm, uint8_t r, uint8_t g, uint8_t b)
{
	pio_sm_put_blocking(pio, sm,
		0x7 << 29 |                   // magic
		(BRIGHTNESS & 0x1f) << 24 |   // global brightness parameter
		(uint32_t) b << 16 |
		(uint32_t) g << 8 |
		(uint32_t) r << 0
	);
}

#define TABLE_SIZE (1 << 8)
uint8_t wave_table[TABLE_SIZE];

int main()
{
	PIO pio = pio0;
	uint sm = 0;
	uint offset = pio_add_program(pio, &apa102_mini_program);
	apa102_mini_program_init(pio, sm, offset, SERIAL_FREQ, PIN_CLK, PIN_DIN);

	for (int i = 0; i < TABLE_SIZE; ++i)
		wave_table[i] = powf(sinf(i * M_PI / TABLE_SIZE), 5.f) * 255;

	uint t = 0;
	while (true)
	{
		put_start_frame(pio, sm);
		for (int i = 0; i < N_LEDS; ++i)
		{
			put_rgb888(pio, sm,
				wave_table[(i + t) % TABLE_SIZE],
				wave_table[(2 * i + 3 * 2) % TABLE_SIZE],
				wave_table[(3 * i + 4 * t) % TABLE_SIZE]
			);
		}
		put_end_frame(pio, sm);
		sleep_ms(10);
		++t;
	}
}
		