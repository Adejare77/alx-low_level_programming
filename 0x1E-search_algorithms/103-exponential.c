#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using `Exponential search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Return: first index where value is located, else -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t count = 1;
	size_t next_exp, current_exp = 0;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (current_exp < size)
	{
		next_exp = count * 2;
		if (next_exp > (size - 1))
			next_exp = size - 1;
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[next_exp] >= value || next_exp == size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", count, next_exp);
			/* using index instead of size */
			return (exp_bin_search_algo(array, count, next_exp, value));
		}
		count *= 2;
		current_exp = count;
	}

	return (-1);
}

/**
 * exp_bin_search_algo - algorithm used to search for a value in a
 * sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @low: low limit index to search from
 * @high: high limit index to search to
 * @value: is the value to search for
 *
 * Return: first index where value is located, else -1 if not found
*/
int exp_bin_search_algo(int *array, size_t low, size_t high, int value)
{
	/* effect of using index instead of size */
	size_t mid = (low + high) / 2;
	size_t index = low;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (; index <= high; index++)
			printf("%d%s", array[index], (index < high) ? ", " : "\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			return (exp_bin_search_algo(array, low, mid - 1, value));
		else
			return (exp_bin_search_algo(array, mid + 1, high, value));
	}

	return (-1);
}
