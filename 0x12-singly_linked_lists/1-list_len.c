#include "lists.h"

/**
 * list_len - function that returns the number of elemnts in a linked list_t
 * list
 * @h: pointer to the first node of the element
 *
 * Return: size of the element
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;
	const list_t *ptr;

	if (h)
	{
		ptr = h;
		for (; ptr; node++)
			ptr = ptr->next;
	}
	return (node);
}
