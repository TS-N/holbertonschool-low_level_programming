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
 * rec_bin - searches for a value in an array of\
 integers using the Binary search algorithm recursively
 * @array: the ascending sorted array to search in
 * @size: the size of the array
 * @value: the value to find
 * @lwbnd: the lower bound of the new subarray
 * @upbnd: the upper bound of the new sub array
 * Return: the index of the value in the array or -1
 **/
int	rec_bin(int *array, size_t size, int value, size_t lwbnd, size_t upbnd)
{
	size_t	mid;

	if (lwbnd > upbnd)
		return (-1);
	print_array(array + lwbnd, upbnd - lwbnd + 1);
	if (array[lwbnd] == value)
		return (lwbnd);
	mid = (upbnd + lwbnd) / 2;
	if (mid < size)
	{
		if (array[mid] > value)
			return (rec_bin(array, size, value, lwbnd, mid - 1));
		else if (array[mid] < value)
			return (rec_bin(array, size, value, mid + 1, upbnd));
		upbnd = mid;
		while (mid + 1  > 0 && array[mid - 1] == value)
			--mid;
		return (rec_bin(array, size, value, mid, upbnd));
	}
	return (-1);
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
	if (array)
		return (rec_bin(array, size, value, 0, size - 1));
	return (-1);
}
