#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of \
 integers using the Linear search algorithm
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the value in the array or -1
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t	i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			++i;
		}
	}
	return (-1);
}
