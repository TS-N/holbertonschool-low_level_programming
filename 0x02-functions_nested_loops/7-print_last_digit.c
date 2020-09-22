#include "holberton.h"

/**
* print_last_digit - return the last digit of input n
*@n: the number to cut
*
* Return: return the last digit
**/

int	print_last_digit(int n)
{
	int	ld;

	if (n < 0)
		ld = (-n % 10);
	else
		ld = (n % 10);
	_putchar('0' + ld);
	return (ld);
}
