#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value
 * @key: is the key. key cannot be an empty string. Must be duplicated
 * @value: is the value associated with the key. Value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 * Description: In case of collision, add the new node at the
 * beginning of the list
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ht_key_idx_pos, check = 1;
	char *key_dup = (char *)strdup(key), *val_dup = (char *)strdup(value);
	hash_node_t *element = NULL, *tmp = NULL;

	if (ht && ht->array && key)
	{
		ht_key_idx_pos = key_index((const unsigned char *)key, ht->size);

		element = malloc(sizeof(hash_node_t));

		if (!element || !val_dup || !key_dup)
			return (0);

		element->key = key_dup;
		element->value = val_dup;
		element->next = NULL;

		/* checks if key position is taken i.e collision*/
		tmp = (ht->array)[ht_key_idx_pos];

		/**
		 * if key postion is taken, checks if it's an update or not:
		 * check = 0 if it is an update, else 1
		 */
		if (tmp)
			check = element_pos(ht, element, ht_key_idx_pos);

		/*if not an update, but there's still collision*/
		if (check && (ht->array)[ht_key_idx_pos])
			element->next = (ht->array)[ht_key_idx_pos];

		/*if there is not collision i.e position is not taken*/
		if (check)
			(ht->array)[ht_key_idx_pos] = element;
	}
	return (0);
}

/**
 * element_pos - Checks if the element is an update. if it is, update
 * the new key, and free the previous key, value and node. if not, add
 * the new element to the beginning of the list
 * @ht: hash table to add or update the key/value
 * @element: the key/value node to be added
 * @key_idx:the key/value position found using djb2 algorithm
 *
 * Return: 0 if it an update, else 1
*/

unsigned long int element_pos(hash_table_t *ht, hash_node_t *element,
unsigned long int key_idx)
{
	unsigned long int check = 1;
	hash_node_t *tmp = NULL, *prev_val_hldr = NULL;

	prev_val_hldr = tmp;
	while (tmp)
	{
		if (strcmp(tmp->key, element->key) == 0)
		{
			element->next = tmp->next;
			if (prev_val_hldr == tmp)
				(ht->array)[key_idx] = element;
			else
				prev_val_hldr->next = element;
			check = 0;
		}
		prev_val_hldr = tmp;
		tmp = tmp ? tmp->next : NULL;
	}

	return (check);
}
