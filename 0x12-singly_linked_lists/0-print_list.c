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
	const list_t *ptr;

	if (h)
	{
		ptr = h;
		while (ptr != NULL)
		{
			if (ptr->str == NULL)
				printf("[0] (nil)\n");
			else
			{
				i = 0;
				for (; ptr->str[i] != '\0'; i++)
					;
				printf("[%d] %s\n", i, ptr->str);
			}
			node++;
			ptr = ptr->next;
		}
	}

	return (node);
}

