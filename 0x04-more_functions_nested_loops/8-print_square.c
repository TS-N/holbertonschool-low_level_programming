#include "holberton.h"

/**
* print_square - print a square of '#'
*@size: the size of the square in '#'s
**/
void	print_square(int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			++j;
		}
		_putchar('\n');
		++i;
	}
	if (size <= 0)
		_putchar('\n');
}
