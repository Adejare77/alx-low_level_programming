#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node's data (n)
 * @head: pointer to pointer parameter
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;

	hnode = new->n;

	h = new->next;

	free(new);

	*head = h;

	return (hnode);
}
