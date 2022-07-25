#include "main.h"

/**
 * _strdup - function that returns a pointer to a new string which
 * is a duplicate of the string str.
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string, else NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (!(str))
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);
	i--;
	for (; i >= 0; i--)
		ptr[i] = str[i];

	return (ptr);
}
