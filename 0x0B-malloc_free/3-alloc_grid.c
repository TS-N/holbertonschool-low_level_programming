#include "holberton.h"

/**
 * create_array - a function that creates an array of chars \
 and initializes it with a specific char
 * @size: the size of the array in bytes
 * @c: the char to initialize that array
 *
 * Return: the newly created initialized array
 **/
char	*create_array(unsigned int size, char c)
{
	char	*s;

	if (!size)
		return (0);
	s = malloc(size);
	if (!s)
		return (0);
	while (size > 0)
	{
		s[size - 1] = c;
		--size;
	}
	return (s);
}

/**
 * alloc_grid - a function that returns a pointer \
 to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: the newly created grid
 **/
int	**alloc_grid(int width, int height)
{
	int	**grid;
	int	i;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc((height) * sizeof(int *));
	if (!grid)
		return (0);
	i = 0;
	while (i < height)
	{
		grid[i] = (int *)create_array((width) * sizeof(int), 0);
		if (!grid[i])
			return (0);
		++i;
	}
	return (grid);
}
