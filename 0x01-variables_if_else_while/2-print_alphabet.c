#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 means (success)
 */
int main(void)
{
	char alp = 'a';

	for (; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
