#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *next = NULL;
	unsigned long int idx = 0;

	if (ht && ht->array)
	{
		while (idx < ht->size)
		{
			tmp = (ht->array)[idx];
			while (tmp)
			{
				next = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = next;
			}
			idx++;
		}
		free(ht->array);
		free(ht);
	}
}
