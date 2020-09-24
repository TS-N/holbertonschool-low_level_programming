#include "holberton.h"

/**
 * _putnb - print a number to stdout
 *@n: the number to print
 *
 **/
void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}
		n = -n;
	}
	if ((n / 10))
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}
	else
		_putchar('0' + n);
}
