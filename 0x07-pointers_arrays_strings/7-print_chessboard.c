#include "holberton.h"

/**
  * print_chessboard - a function that prints the chessboard
  * @a: the chessboard to print as a double array
  **/
void	print_chessboard(char (*a)[8])
{
	int	i;
	int	j = 0;

	if (!a)
		return;
	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i]);
			++i;
		}
		_putchar('\n');
		++j;
	}
}
