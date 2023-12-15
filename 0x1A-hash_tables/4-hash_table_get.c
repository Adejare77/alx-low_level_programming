#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: value associated with the element or NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx_pos;
	hash_node_t *tmp = NULL;

	if (ht && key)
	{
		key_idx_pos = key_index((const unsigned char *)key, ht->size);
		tmp = (ht->array)[key_idx_pos];
		while (tmp)
		{
			if (strcmp(tmp->key, (char *)key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
		return (NULL);
	}
	return (NULL);
}
