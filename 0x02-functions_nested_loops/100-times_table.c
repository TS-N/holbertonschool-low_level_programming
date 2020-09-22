#include "holberton.h"

/**
 * _putnb - print a number to stdout
 *@n: the number to print
 *
 **/
void	_putnb(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10))
	{
		_putnb(n / 10);
		_putchar('0' + (n % 10));
	}
	else
		_putchar('0' + n);
}

/**
* print_times_table - print the n times table
*@n: the table number should be greater than 0 and less than 15
* Return: nothing
**/

void	print_times_table(int n)
{
	int	x;
	int	y;
	int	nb;

	x = 0;
	if (n < 0 || n > 15)
		return;
	while (x <= n)
	{
		y = 0;
		while (y <= n)
		{
			nb = x * y;
			if ((nb / 10))
			{
				_putchar(',');
				_putchar(' ');
				if (!(nb / 100))
					_putchar(' ');
				_putnb(nb);
			}
			else if (!y)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putnb(nb);
			}
			++y;
		}
		++x;
		_putchar('\n');
	}
}
