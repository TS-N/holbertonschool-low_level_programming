#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of\
  integers using the interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located, -1 otherwise
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t	low;
	size_t	high;
	size_t	pos;

	if (array)
	{
		low = 0;
		high = size - 1;
		while (low < high)
		{
			pos = low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));
			if (pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] > value)
				high = pos - 1;
			else if (array[pos] < value)
				low = pos + 1;
			else
				return (pos);
		}
	}
	return (-1);
}
