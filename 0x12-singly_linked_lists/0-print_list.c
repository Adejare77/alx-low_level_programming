#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t
 * list
 * @h: pointer to the elements
 *
 * Return: number of the nodes
 * Description: if str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	int i;

	if (h)
	{
		while (h != NULL)
		{
			if (ptr->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			node++;
			h = h->next;
		}
	}

	return (node);
}

