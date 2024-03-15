#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted array of integers using
 * `Jump search algorithm`
 * @list: pointer to the hed of the list to search in
 * @size: is the number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node, else NULL if not present
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp, *prev_temp;
	size_t jump_idx = sqrt(size);
	size_t current_idx = jump_idx, prev_idx = 0, idx;

	if (!list || size <= 0)
		return (NULL);

	temp = prev_temp = list;
	while (temp && current_idx <= size)
	{
		idx = prev_idx;
		while (idx < current_idx && temp)
		{
			temp = temp->next;
			idx++;
		}
		printf("Value checked at index [%ld] = [%d]\n",
		current_idx, temp->n);
		if (temp->n >= value || current_idx == size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			prev_idx, current_idx);
			while (prev_idx <= current_idx && prev_temp)
			{
				printf("Value checked at index [%ld] = [%d]\n", prev_idx, prev_temp->n);
				if (prev_temp->n == value)
					return (prev_temp);
				prev_temp = prev_temp->next;
				prev_idx++;
			}
			return (NULL);
		}
		prev_temp = temp;
		prev_idx = current_idx;
		current_idx += jump_idx;
		if (current_idx >= size)
			current_idx = size - 1;
	}
	return (NULL);
}
