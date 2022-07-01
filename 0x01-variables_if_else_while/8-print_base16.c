#include <stdio.h>

/**
 * main - prints all the number of base 16 in
 * lower
 *
 * Return: Always 0 means (success)
 */
int main(void)
{
	int k = 48;
	char alp = 'a';

	for (; k < 58; k++)
		putchar(k);
	for (; alp < 'g'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
