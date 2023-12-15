#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *prev_val_hldr = NULL;
	unsigned long int idx = 0;

	if (ht && ht->array)
	{
		while (idx < ht->size)
		{
			tmp = (ht->array)[idx];
			while (tmp)
			{
				prev_val_hldr = tmp;
				tmp = tmp->next;
				free(prev_val_hldr);
			}
			idx++;
		}
		free(ht->array);
	}
}
