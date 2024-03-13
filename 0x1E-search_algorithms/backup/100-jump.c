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
	float blk_size;
	size_t count = 1;
	size_t lw_blk_lim;
	size_t up_blk_lim;
	size_t blk_idx;

	if (!array)
		return (-1);

	blk_size = sqrt(size);
	if (blk_size > (float)(size_t)(blk_size))
		blk_size = blk_size + 1;
	blk_size = (size_t)blk_size;

	while (count * blk_size < size)
	{
		blk_idx = (count * blk_size) - count;
		lw_blk_lim = (count - 1) * blk_size - count;
		printf("Value checked array[%ld] = [%d]\n", lw_blk_lim, array[lw_blk_lim]);
		if (array[(int)(blk_idx)] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", lw_blk_lim, blk_idx);
			for (; lw_blk_lim < blk_idx; lw_blk_lim++)
			{
				printf("Value checked array[%ld] = [%d]\n", lw_blk_lim, array[lw_blk_lim]);
				if (array[lw_blk_lim] == value)
					return lw_blk_lim;
			}
		}
		count++;
	}
}
