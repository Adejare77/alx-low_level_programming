#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to be concatenated
 *
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, t = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (*(s2 + i) != '\0')
		i++;
	while (s1[j] != '\0')
		j++;
	if (i <= n)
		n = i;
	ptr = malloc(j + n + 1);
	if (ptr == NULL)
		return (NULL);
	while (t < j + n)
	{
		if (t < j)
			ptr[t] = s1[t];
		else
			ptr[t] = s2[t - j];
		t++;
	}
	ptr[t] = '\0';

	return (ptr);
}
