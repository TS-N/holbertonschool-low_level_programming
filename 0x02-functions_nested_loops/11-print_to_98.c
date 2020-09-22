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
  * print_to_98 - print all number from input n to 98
  *@n: the starting number
  *
  **/
void	print_to_98(int n)
{
	int	nb;

	nb = n;
	while (nb != 98)
	{
		if (!(nb == n))
		{
			_putchar(',');
			_putchar(' ');
		}
		_putnb(nb);
		if (n < 98)
			++nb;
		else if (n > 98)
			--nb;
	}
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	_putnb(nb);
	_putchar('\n');
}
