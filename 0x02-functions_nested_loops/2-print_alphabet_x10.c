#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lower
 * case
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alp;
	int i = 0;

	while (i < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
		i++;
	}
}
