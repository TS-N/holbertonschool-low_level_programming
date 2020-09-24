#include "holberton.h"

/**
 * print_number - print a number to stdout
 *@n: the number to print
 *
 **/
void	print_number(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if ((nb / 10))
	{
		print_number(nb / 10);
		_putchar('0' + (nb % 10));
	}
	else
		_putchar('0' + nb);
}
