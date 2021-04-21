#include "search_algos.h"

/**
  * print_array - prints an array with style
  * @array: the array to print
  * @size: the size of the array
  **/
void	print_array(int *array, size_t size)
{
	size_t	i = 0;

	printf("Searching in array: ");
	while (i < size)
	{
		printf("%i", array[i]);
		if (i != size - 1)
			printf(", ");
		++i;
	}
	printf("\n");
}

/**
 * advanced_binary - searches for a value in an array of\
 integers using the Binary search algorithm
 * @array: the ascending sorted array to search in
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the value in the array or -1
 **/
int advanced_binary(int *array, size_t size, int value)
{
	size_t	imin;
	size_t	imax;
	size_t	i;

	if (array)
	{
		print_array(array, size);
		if (array[0] == value)
			return (0);
		imin = 0;
		imax = size - 1;
		while (imin < imax)
		{
			i = (imax + imin) / 2;
			if (array[i] > value)
				imax = i - 1;
			else if (array[i] < value)
				imin = i + 1;
			else
				if (array[i - 1] == value)
				{
					imax = i;
					imin = i - 1;
				}
				else
					return (i);
				print_array(array + imin, imax - imin + 1);
		}
	}
	return (-1);
}
