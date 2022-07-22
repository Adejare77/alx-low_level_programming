#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check for
 *
 * Return: Always 1, else 0
 */
int _isalpha(int c)
{
	if (((c >= 97) & (c <= 122)) | ((c >= 65) & (c <= 90)))
		return (1);
	return (0);
}
