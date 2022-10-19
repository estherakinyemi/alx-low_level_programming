#include "main.h"
/**
 ** jack_bauer - prints every minute of the day of jack bauer
 **
 **/

void jack_bauer(void)
{
	int ur, min;

	for (ur = 0 ; ur <= 23 ; ur++)
	{
		for (min = 0 ; min <= 59 ; min++)
		{
			_putchar((ur / 10) + '0');
			_putchar((ur % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
