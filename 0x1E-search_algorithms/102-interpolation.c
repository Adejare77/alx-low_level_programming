#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the `interpolation search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located, else -1 if not present
 * Description: to determine probe position, you can use:
 * size_t pos = low + (((double)(high - low) / (array[high] - array[low]))\
 * * (value - array[low]))
*/

int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0;
	size_t idx;

	if (!array)
		return (-1);

	idx = interpolation_algo(array, low, high, value);
	return (idx);
}

int interpolation_algo(int *array, size_t low, size_t high, int value)
{
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

	if (pos > high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	else if (low < high)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			while (pos > low && array[pos - 1] == value)
				pos--;
			return pos;
		}
		else if (array[pos] > value)
			return (interpolation_algo(array, low, pos - 1, value));
		else
			return (interpolation_algo(array, pos + 1, high, value));
	}
	return (-1);
}
