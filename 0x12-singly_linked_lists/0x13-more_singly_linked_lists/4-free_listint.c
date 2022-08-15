#include "lists.h"

/**
 * free_listint - functin that fress a listint_t list
 * @head: pointer or head
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}
}
