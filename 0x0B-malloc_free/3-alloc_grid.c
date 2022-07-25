#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2-dimensional
 * array of integers
 * @width: width or number of columns of the array
 * @height: height or number of rows of the array
 *
 * Return: pointer to 2-dimensional array of integers else NULL
 * Description: Each element of the grid should be initialized to 0.
 * if width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int y = 0, x;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (; y < height; y++)
	{
		ptr[y] = malloc(sizeof(int) * width);
		if (ptr[y] == NULL)
			return (NULL);
		x = 0;
		while (x < width)
		{
			ptr[y][x] = 0;
			x++;
		}
	}

	return (ptr);
}
