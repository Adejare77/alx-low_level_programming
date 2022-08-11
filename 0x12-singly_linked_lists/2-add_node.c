#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to the head pointer of the node
 * @str: string to be duplicated
 *
 * Return: pointer to the new list element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i = 0;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	for (; str[i]; i++)
		;
	ptr->len = i;
	head = ptr;

	return (*head);
}
