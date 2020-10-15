#include "holberton.h"

/**
  * array_range - a function that creates an array of integers
  * @min: the starting int of the array
  * @max: the ending int of the array
  *
  * Return: a pointer to the newly allocated array or NULL
  **/
int	*array_range(int min, int max)
{
	int		*r;
	int		*buf;

	if (min > max)
		return (0);
	r = malloc((max - min + 1) * sizeof(int));
	if (!r)
		return (0);
	buf = r;
	while (min <= max)
	{
		*buf = min;
		++min;
		++buf;
	}
	return (r);
}
