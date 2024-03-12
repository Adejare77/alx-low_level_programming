#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * `Linear search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else -1 if not present
*/

int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (!array)
		return (-1);

	while ((size_t)index < size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
