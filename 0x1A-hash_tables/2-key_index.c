#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to find its index
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 *
 * Description: This function should use the hash_dbj2 function
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_i;
	/*Hash index gives the remainder after division*/
	h_i = hash_djb2(key) % size;

	return (h_i);
}
