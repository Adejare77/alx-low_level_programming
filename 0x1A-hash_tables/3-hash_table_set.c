#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value
 * @key: is the key. key cannot be an empty string
 * @value: is the value associated with the key. Value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 * Description: In case of collision, add the new node at the
 * beginning of the list
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ht_key_idx_pos, count = 1;
	char *key_dup = (char *)strdup(key);
	char *val_dup = (char *)strdup(value);
	hash_node_t *element = NULL, *tmp = NULL, *prev_val_hldr = NULL;

	if (ht && ht->array && key)
	{
		ht_key_idx_pos = key_index((const unsigned char *)key, ht->size);
		element = malloc(sizeof(hash_node_t));
		if (!element || !val_dup)
			return (0);
		element->key = key_dup;
		element->value = val_dup;
		element->next = NULL;
		tmp = (ht->array)[ht_key_idx_pos];
		prev_val_hldr = tmp;
		while (tmp)  /* checks if it an update. if yes: count = 0, else 1*/
		{
			if (strcmp(tmp->key, key) == 0)
			{
				element->next = tmp->next;
				if (prev_val_hldr == tmp)
					(ht->array)[ht_key_idx_pos] = element;
				else
					prev_val_hldr->next = element;
				count = 0;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
			prev_val_hldr = tmp;
			tmp = tmp->next;
		}
		if (count && (ht->array)[ht_key_idx_pos])
			element->next = (ht->array)[ht_key_idx_pos];
		if (count)
			(ht->array)[ht_key_idx_pos] = element;
		return (1);
	}
	return (0);
}
