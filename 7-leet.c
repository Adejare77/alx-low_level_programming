#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string that will be encoded
 *
 * Return: encoded string
 * Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 */
char *leet(char *str)
{
	int i = 0, k;
	char s[] = "aAeEoOtTlL";
	char t[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
			if (str[i] == s[k])
				str[i] = t[k];
	}

	return (str);
}
