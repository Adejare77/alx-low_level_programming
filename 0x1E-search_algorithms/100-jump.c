#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * `Jump search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, else -1 if not present
*/
int jump_search(int *array, size_t size, int value)
{
	size_t blk_idx;
	size_t count = 1;
	size_t lw_blk_lim;
	size_t up_blk_lim;

	if (!array)
		return (-1);

	blk_idx = (size_t)sqrt(size);
	lw_blk_lim = 0;

	while (lw_blk_lim <= size)
	{
		up_blk_lim = (count * blk_idx);
		printf("Value checked array[%ld] = [%d]\n", lw_blk_lim, array[lw_blk_lim]);
		if ((up_blk_lim >= size) || array[(int)(up_blk_lim)] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			lw_blk_lim, up_blk_lim);
			if (up_blk_lim >= size)
				up_blk_lim = size - 1;

			for (; lw_blk_lim <= up_blk_lim; lw_blk_lim++)
			{
				printf("Value checked array[%ld] = [%d]\n", lw_blk_lim, array[lw_blk_lim]);
				if (array[lw_blk_lim] == value)
					return (lw_blk_lim);
			}
			return (-1);
		}
		count++;
		lw_blk_lim = (count - 1) * blk_idx;
	}
	return (-1);
}
