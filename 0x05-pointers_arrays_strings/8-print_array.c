#include "holberton.h"

/**
* print_array - print an array
* @a: the array to print
* @n: the number of elements to print
*
**/
void	print_array(int *a, int n)
{
	int	i = 0;

	while (i < n)
	{
		if (i)
			printf(", ");
		printf("%d", a[i]);
		++i;
	}
	printf("\n");
}
