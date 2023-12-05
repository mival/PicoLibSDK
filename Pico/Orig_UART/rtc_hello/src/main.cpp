
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************
// Set a date/time on the RTC, then repeatedly print the current time,
// 10 times per second, to show it updating.

/*
Debug output
------------
Hello RTC!
Friday 5 June 15:46:35 2020
*/

#include "../include.h"

int main()
{
	stdio_init_all();
	printf("Hello RTC!\n");

	char datetime_buf[256];
	char *datetime_str = &datetime_buf[0];

	// Start on Friday 5th of June 2020 15:45:00
	datetime_t t =
	{
		.year  = 2020,
		.month = 06,
		.day   = 05,
		.dotw  = 5, // 0 is Sunday, so 5 is Friday
		.hour  = 15,
		.min   = 45,
		.sec   = 00
	};

	// Start the RTC
	rtc_init();
	rtc_set_datetime(&t);

	// Print the time
	while (true)
	{
		rtc_get_datetime(&t);
		datetime_to_str(datetime_str, sizeof(datetime_buf), &t);
		printf("\r%s      ", datetime_str);
		sleep_ms(100);
	}

	return 0;
}
