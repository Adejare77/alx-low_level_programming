#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value that must be included
 * @max: the maximum value that must be included
 *
 * Return: int pointer
 * Description: if min > max, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(max - min + 1);
	if (ptr == NULL)
		return (NULL);
	for (; min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
