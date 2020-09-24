#include "holberton.h"

/**
 * _putnb - print a number to stdout
 *@n: the number to print
 *
 **/
void	_putnb(int n)
{
	if ((n / 10))
	{
		_putnb(n / 10);
		_putchar('0' + (n % 10));
	}
	else
		_putchar('0' + n);
}

/**
 * more_numbers - print numbers
 **/
void	more_numbers(void)
{
	int	nb;
	int	i;

	c = '0';
	i = 0;
	while (i < 10)
	{
		nb = 0;
		while (nb < 15)
		{
			_putnb(nb);
			++nb;
		}
		_putchar('\n');
		++i;
	}
}
