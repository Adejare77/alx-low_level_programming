#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concated strings, else NULL
 * Description: if NULL is passed, treat it as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0, k = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	z = i + j;
	ptr = malloc(sizeof(char) * z + 1);
	if (ptr == NULL)
		return (NULL);
	while (k < z)
	{
		if (k < i)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[k - i];
		k++;
	}

	return (ptr);
}
