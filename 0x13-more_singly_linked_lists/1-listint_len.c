#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer of the list
 *
 * Return: Nothing
 */
size_t listint_len(const listint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		h = h->next;
		counts++;
	}
	return (counts);
}
