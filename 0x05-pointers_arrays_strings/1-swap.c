#include "holberton.h"

/**
* swap_int - swap the values of 2 int
*@a: value 1 to swap
*@b: value 2 to swap
**/
void	swap_int(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = *b;
	*b = buf;
}

