#include "main.h"

/**
 * free_grid - function that freess a 2 dimensional grid previously
 * created by alloc_grid function.
 * @grid: the size of the grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (height > 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

