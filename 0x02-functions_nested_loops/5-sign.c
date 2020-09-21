#include "holberton.h"

/**
* print_sign - check if an integer is positive negative or equal 0
*@n: the number to check
*
* Return: return 1, -1 and 0 respectively
**/

int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (!n)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
