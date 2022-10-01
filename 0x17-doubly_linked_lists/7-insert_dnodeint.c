#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: pointer to pointer to the first node
 * @idx: index of the list where the new node should be added.
 * @n: data of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!(new_node))
		return (NULL);

	new_node->n = n;
	ptr = tmp = *h;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = ptr;
		if (ptr)
			ptr->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	else if (*h)
	{
		ptr = *h;
		while ((ptr) && (count < idx))
		{
			tmp = ptr;
			ptr = ptr->next;
			count++;
			if (!(ptr) && (count != idx))
				return (NULL);
		}

		new_node->next = ptr;
		new_node->prev = tmp;
		tmp->next = new_node;

		return (new_node);
	}

	else
		return (NULL);
}
