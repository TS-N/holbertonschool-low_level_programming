#include "holberton.h"

/**
  * print_diagsums - a function that prints the sum of the two \
  diagonals of a square matrix
  * @a: the matrix as a single array
  * @size: the size of the matrix
  **/
void	print_diagsums(int *a, int size)
{
	int	i, j;
	unsigned int	sum1, sum2 = 0;

	i = size - 1;
	j = 0;
	while (j < size)
	{
		sum1 += a[j * size + j];
		sum2 += a[j * size + i];
		--i;
		++j;
	}
	printf("%u, %u\n", sum1, sum2);
}
