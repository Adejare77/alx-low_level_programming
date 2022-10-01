#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlisint_t linked list
 * @head: pointer to the first node
 * @index: index of the node, starting from 0
 *
 * Return: the node of the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (head)
	{
		while ((count < index) && tmp)
		{
			tmp = tmp->next;
			count++;
			if (!(tmp) && (count != index))
				return (NULL);
		}
	}

	return (tmp);
}
