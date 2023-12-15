#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key is the key. key cannot be an empty string
 * @value: value associated with the key. value must be duplicated.
 * value can be an empty
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr;
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = (char *) key;
	new_node->value = (char *) value;
	new_node->next = NULL;

	if (key)
	{
		index = key_index((const unsigned char *) key, ht->size);

		if ((ht->array)[index] == NULL)
		{
			ht->array[index] = new_node;
			ptr = ht->array[index];
			return (1);
		}

		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr = new_node;
		return (1);
	}
	return (0);
}
