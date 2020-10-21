#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer
  * @array: the array to search the int in
  * @size: the size of tha array
  * @cmp: the comparasion function
  *
  * Return: the index for which cmp returns 0, -1 otherwise
  **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if ((*cmp)(array[i]))
			return (i);
		++i;
	}
	return (-1);
}
