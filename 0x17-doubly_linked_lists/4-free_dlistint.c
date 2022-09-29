#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to be freed
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

if (head)
{
tmp = head;
while ((head = tmp->next))
{
free(tmp);
tmp = head;
}
free(tmp);
}
}
