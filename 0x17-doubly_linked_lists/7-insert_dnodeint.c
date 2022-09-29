#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: pointer to pointer to the first node
 * idx: index of the list where the new node should be added.
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
    if (*h)
    {
        ptr = *h;
        while ((ptr) && (count < idx))
        {
            tmp = ptr;
            printf("value of ptrs %d\n", ptr->n);
            ptr = ptr->next;
            if (!(ptr) && (count != idx))
                return (NULL);
            count++;
        }

        new_node->next = ptr;
        new_node->prev = tmp;
        ptr = new_node;

        return (new_node);
    }
    else
        return (NULL);
 }

