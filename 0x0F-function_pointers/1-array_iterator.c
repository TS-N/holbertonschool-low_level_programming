#include "function_pointers.h"

/**
  * array_iterator - a function that executes a function given \
  as a parameter on each element of an array
  *@array: the array to go through
  *@size: the size of the array
  *@action: the function that manipulate each int of array
  **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	i = 0;
	if (!array || !action)
		return;
	while (i < size)
		(*action)(array[i++]);
}
