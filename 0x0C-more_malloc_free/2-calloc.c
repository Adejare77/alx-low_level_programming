#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * using malloc
 * @nmemb: the array size to allocate memory for
 * @size: size to allocate
 *
 * Return: void pointer or NULL if it fails
 * Description: The memory is set to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
