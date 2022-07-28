#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: void pointei
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(unsigned int));
	if (ptr == NULL)
		exit (98);

	return (ptr);
}
