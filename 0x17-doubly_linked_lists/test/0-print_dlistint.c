#include "lists.h"

/**
 * print_dlistint - function that prints all the element of a dlistint_t list
 * @h: pointer to the first node i.e (pointer to previous node is NULL)
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr;
	size_t count = 0;

	if (h)
	{
		ptr = (dlistint_t *) h;
		while (ptr)
		{
			count += 1;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
	}

	return (count);
}
