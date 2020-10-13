#include "holberton.h"

/**
  * free_grid - a function that frees a 2 dimensional grid \
  previously created by your alloc_grid function
  * @grid: the grid created by alloc_grid
  * @height: the height of the grid
  **/
void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		++i;
	}
	free(grid);
}
