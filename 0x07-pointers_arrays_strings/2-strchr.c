#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string in which to find the character
 * @c: character to be searched for
 *
 * Return: Pointer to the first occurence of the
 * character c in the string s, or Null if the
 * character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return (NULL);
}
