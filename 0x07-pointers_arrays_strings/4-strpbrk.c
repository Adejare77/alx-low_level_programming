#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a
 * set of bytes
 * @s: string whose characters are to be searched for
 * @accept: string where the characters in s are searched
 *
 * Return: pointer to the byte n s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 *
 * Description: The _strpbrk() function locates the first
 * occurence in the string s of any of the bytes in the
 * string accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	}

	return (NULL);
}
