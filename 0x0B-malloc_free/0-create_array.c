#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the character to fill the size with
 *
 * Return: Null if size = 0 else return pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
