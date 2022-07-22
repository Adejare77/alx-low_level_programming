#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: The area to be filled with constant byte
 * @b: the byte used to fill
 * @n: nth byte to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
