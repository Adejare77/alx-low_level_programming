#include "search_algos.h"

/**
 * advanced_binary_search - function that searches for a value in a sorted array of
 * integers using the `Binary search algorithms`
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where value is FIRST located, else -1 if not present
*/

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);

	/* using index instead of size*/
	index = adv_bin_search_algo(array, 0, size - 1, value);
	return (index);
}


/**
 * adv_bin_search_algo - applies `Binary Algorithm` to search of the value
 * @array: pointer to the first element of the array to search in
 * @low: low end where search is to begin
 * @high: high end where search is to stop
 * @value: is the value to search for
 *
 * Return: index where the value is located, else -1 if not found
*/
int adv_bin_search_algo(int *array, size_t low, size_t high, int value)
{
	/* Effect of using index instead of size */
	size_t mid = (low + high) / 2;
	size_t index = low;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (; index <= high; index++)
			printf("%d%s", array[index], (index < high) ? ", " : "\n");

		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return (adv_bin_search_algo(array, low, mid, value));
			return (mid);
		}
		else if (array[mid] > value)
			return (adv_bin_search_algo(array, low, mid - 1, value));
		else
			return (adv_bin_search_algo(array, mid + 1, high, value));
	}

	return (-1);
}
