#include "holberton.h"

/**
* print_diagonal - print a diagonal of '\' n times
*@n: the times '\' will be printed
**/
void	print_diagonal(int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			++j;
		}
		++i;
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
