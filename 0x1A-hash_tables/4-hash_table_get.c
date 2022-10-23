#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the element, or NULL
 * if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *ptr;
    long unsigned int index;

    if (ht)
    {
        index = key_index((const unsigned char *)key, ht->size);
        if (!(ht->array[index]))
            return (NULL);
        ptr = ht->array[index];
        while (ptr->next && (ptr->key != (char *)key))
            ptr = ptr->next;
        return (ptr->value);
    }
    return (NULL);
}
