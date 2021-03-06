#include "search_algos.h"
#include <math.h>

/**
  * jump_search - searches for a value in an array of\
   integers using the jump search algorithm
  * @array: a pointer to the first element of the array to search in
  * @size: is the number of elements in array
  * @value:  is the value to search for
  *
  * Return: the first index where value is located, -1 otherwise
  **/
int jump_search(int *array, size_t size, int value)
{
	size_t	imin;
	size_t	imax;

	if (array)
	{
		imin = 0;
		imax = 0;
		while (imax < size && array[imax] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", imax, array[imax]);
			imin = imax;
			imax = imax + sqrt(size);
			if (imin >= size)
				return (-1);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", imin, imax);
		while (imin <= imax)
		{
			printf("Value checked array[%lu] = [%d]\n", imin, array[imin]);
			imin = imin + 1;
			if (array[imin] == value)
			{
				printf("Value checked array[%lu] = [%d]\n", imin, array[imin]);
				return (imin);
			}
		}
	}
	return (-1);
}
