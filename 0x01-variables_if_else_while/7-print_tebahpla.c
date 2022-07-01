#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 means (success)
 */
int main(void)
{
	char alp = 'z';

	for (; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');

	return (0);
}
