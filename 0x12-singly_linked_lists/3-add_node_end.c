#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list
 * @head: pointer to the pointer of initial one
 * @str: strings that needs to be duplicated
 *
 * Return: pointer to the new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;
	int i = 0;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = NULL;
	for (; str[i]; i++)
		i++;
	ptr->len = i;
	tmp = *head;
	if (!(*tmp))
		*head = ptr;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ptr;
	}

	return (*head);
}

