#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data (n)
 * of a dlistint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum of all the data(n), if empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (head)
	{
		ptr = head;
		while (ptr)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
