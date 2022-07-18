#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: contains the characters to be searched for
 * @accept: the string where the search is done
 *
 * Return: the number of bytes in the intial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}

	return (count);
}
