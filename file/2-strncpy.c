#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: number of character to be copied from the second string
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
