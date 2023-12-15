#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: if ht is NULL, don't print anything
 * Description: You should print the key/value in the order that
 * they appear in the array of hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL, *prev_val_hldr = NULL;

	if (ht && ht->array)
	{
		putchar('{');
		while (idx < ht->size)
		{
			tmp = (ht->array)[idx];
			while (tmp)
			{
				prev_val_hldr = ht->array[idx];
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			idx++;
			if (prev_val_hldr && (ht->array)[idx])
				printf(", ");
		}
		printf("}\n");
	}
}
