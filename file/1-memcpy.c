#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area to be copied to
 * @src: memory area
 * @n: nth times of src to be copied to dest
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
