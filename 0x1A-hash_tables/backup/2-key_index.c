#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @size: sizse of the array of the hash table
 * @key: the key or item
 *
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 *
 * Description: The function should use the hash_djb2 function written earlier.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_k;

	h_k = hash_djb2(key) % size;

	return (h_k);
}
