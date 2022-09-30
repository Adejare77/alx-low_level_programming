#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 * a linked dlistint_t list.
 * @h: pointer to the head (i.e whose pointer to prev is NULL)
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr;
	size_t count = 0;

	if (h)
	{
		ptr = (dlistint_t *) h;
		while (ptr)
		{
			count += 1;
			ptr = ptr->next;
		}
	}

	return (count);
}
