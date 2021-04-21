#include "search_algos.h"

int	binary_search(int *array, size_t size, int value);

/**
 * exponential_search - searches for a value in an array of\
 integers using the exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located, -1 otherwise
 **/
int	exponential_search(int *array, size_t size, int value)
{
	size_t	bound;
	size_t	max;
	int	r;

	if (array)
	{
		if (array[0] == value)
			return (0);
		bound = 1;
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		max = (size < bound + 1 ? size : bound + 1);
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, max - 1);
		r = binary_search(array + bound / 2, max - bound / 2, value);
		if (r != -1)
			return (r + bound / 2);
	}
	return (-1);
}


/**
 * print_array - prints an array with style
 * @array: the array to print
 * @size: the size of the array
 **/
void	print_array(int *array, size_t size)
{
	size_t	i = 0;

	printf("Searching in array:");
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
 * binary_search - searches for a value in an array of\
 integers using the Binary search algorithm
 * @array: the ascending sorted array to search in
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the value in the array or -1
 **/
int	binary_search(int *array, size_t size, int value)
{
	size_t	imin;
	size_t	imax;
	size_t	i;

	if (array)
	{
		imin = 0;
		imax = size - 1;
		print_array(array, size);
		while (imin < imax)
		{
			i = (imax + imin) / 2;
			if (array[i] > value)
				imax = i - 1;
			else if (array[i] < value)
				imin = i + 1;
			else
				return (i);
			print_array(array + imin, imax - imin + 1);
		}
	}
	return (-1);
}
