#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to the head pointer of the node
 * @str: string to be duplicated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
