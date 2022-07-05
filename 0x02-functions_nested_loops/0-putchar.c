#include "main.h"

/**
 * main - prints the word "_putchar"
 *
 * Return: Always 0 means success
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
