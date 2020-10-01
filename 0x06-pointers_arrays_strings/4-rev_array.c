#include "holberton.h"

/**
 * reverse_array - reverse elements in an array
 * @a: the array to modify
 * @n: the array size
 *
 **/
void	reverse_array(int *a, int n)
{
	int	buf;
	int	i;

	if (!a)
		return;
	i = 0;
	while (i < (n / 2))
	{
		buf = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = buf;
		++i;
	}
}
