#include "holberton.h"

/**
* jack_bauer - the time minute by minute for a full day
**/

void jack_bauer(void)
{
	int	h;
	int	min;

	h = 0;
	while (h < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			++min;
		}
		++h;
	}
}
