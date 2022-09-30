#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * "index" of a dlistint_t linked list.
 * @head: pointer to pointer to the first node
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node, *tmp;
	unsigned int count = 0;

	if (*head)
	{
		tmp = *head;
		while ((tmp) && count < index)
		{
			del_node = tmp;
			tmp = tmp->next;
			count++;
		}

		tmp = tmp->next;
		free(del_node->next);
		del_node->next = tmp;

		return (1);
	}
	else
		return (-1);
}
