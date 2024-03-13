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

	/* using size instead of index */
	index = adv_bin_search_algo(array, 0, size, value);
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
	/* Effect of using size instead of index */
	size_t mid = (low + high) % 2 == 0 ? (low + high) / 2 : ((
		low + high) / 2) + 1;
	size_t index = low;

	if (low < high)
	{
		printf("Searching in array: ");
		for (; index < high; index++)
			printf("%d%s", array[index], (index + 1 < high) ? ", " : "\n");

		if (array[mid - 1] == value)
		{
			if ((mid - 1) > 0 && array[mid - 2] == value)
				return (adv_bin_search_algo(array, low, mid, value));
			return (mid - 1);
		}
		else if (array[mid - 1] > value)
			return (adv_bin_search_algo(array, low, mid - 1, value));
		else
			return (adv_bin_search_algo(array, mid, high, value));
	}

	return (-1);
}
