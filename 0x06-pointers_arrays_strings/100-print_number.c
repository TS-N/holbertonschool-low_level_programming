#include "holberton.h"

/**
 * print_number - like itoa
 * @n: the number to print
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
	if (nb >= 10)
	{
		print_number(nb / 10);
		_putchar(nb % 10 + '0');
		return;
	}
	_putchar(nb + '0');
}
