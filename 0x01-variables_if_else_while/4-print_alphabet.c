#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: Always 0 means (success)
 */
int main(void)
{
	char alp = 'a';

	for (; alp <= 'z'; alp++)
	{
		if ((alp == 'q') | (alp == 'e'))
			continue;
		else
			putchar(alp);
	}
	putchar('\n');

	return (0);
}
