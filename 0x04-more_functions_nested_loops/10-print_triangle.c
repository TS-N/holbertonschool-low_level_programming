#include "holberton.h"

/**
* print_triangle - print a triagle of '#'s
*@size: the size of the triangle base in '#'s
**/
void	print_triangle(int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j < (size - i - 1))
				_putchar(' ');
			else
				_putchar('#');
			++j;
		}
		_putchar('\n');
		++i;
	}
	if (size <= 0)
		_putchar('\n');
}
