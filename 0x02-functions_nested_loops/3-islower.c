#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: the character to check for
 *
 * Return: Always 1.
 * else, return 0
 */
int _islower(int c)
{
	if ((c >= 97) & (c <= 122))
		return (1);

	return (0);
}
