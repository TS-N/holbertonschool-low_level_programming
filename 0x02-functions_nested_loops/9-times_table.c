#include "holberton.h"

/**
* times_table - print the 9 times table
*
* Return: nothing
**/

void	times_table(void)
{
	int	x;
	int	y;
	int	nb;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			nb = x * y;
			if ((nb / 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (nb / 10));
				_putchar('0' + (nb % 10));
			}
			else if (!y)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (nb));
			}
			++y;
		}
		++x;
		_putchar('\n');
	}
}
