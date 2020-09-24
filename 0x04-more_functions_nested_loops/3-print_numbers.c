#include "holberton.h"

/**
* print_numbers - print all digits
**/
void	print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}
