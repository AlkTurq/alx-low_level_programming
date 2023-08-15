#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour1, hour2;
	int min1, min2;

	for (hour1 = 0; hour1 < 3; hour1++)
	{
		for (hour2 = 0; hour2 < 4; hour2++)
		{
			for (min1 = 0; min1 < 6; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
