#include "holberton.h"

/**
* print_line - print a line of '_' n times
*@n: the times '_' will be printed
**/

void	print_line(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		++i;
	}
	_putchar('\n');
}
