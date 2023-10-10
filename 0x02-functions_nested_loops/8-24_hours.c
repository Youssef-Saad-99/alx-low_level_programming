#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: A function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int sec, min;

	min = 0;
	while (min <= 23)
	{
		sec = 0;
		while (sec <= 59)
		{
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar(':');
			_putchar((sec / 10) + 48);
			_putchar((sec % 10) + 48);
			_putchar('\n');
			sec++;
		}
		min++;
	}
}
