#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string where to search for the word
 * @needle: string to be searched for
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k;

	while (needle[i] != '\0')
		i++;
	for (; haystack[j] != '\0'; j++)
	{
		if (haystack[j] == needle[0])
		{
			k = 0;
			for (; needle[k] != '\0'; k++)
				if (needle[k] != (haystack + j)[k])
					break;
		}
		if (i == k)
			return (haystack + j);
	}

	return (0);
}
