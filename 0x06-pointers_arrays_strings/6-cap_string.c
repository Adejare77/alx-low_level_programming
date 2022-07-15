#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: Capitalized pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	if ((str[0] >= 97) && (str[0] <= 122))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i] == '\t') || (str[i] == ' ') ||
				(str[i] == '\n') || (str[i] == ',') || (str[i] == ';')
				|| (str[i] == '.') || (str[i] == '!') || (str[i] == '?')
				|| (str[i] == '"') || (str[i] == '(') || (str[i] == ')')
				|| (str[i] == '{') || (str[i] == '}'))
		{
			if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
				str[i + 1] -= 32;
		}
		i++;
	}

	return (str);
}
