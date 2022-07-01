#include <stdio.h>

/**
 * main - prints all possible combination of single
 * digit numbers
 *
 * Return: Always 0 means (success)
 */
int main(void)
{
	int k = 48;

	for (; k < 58; k++)
	{
		putchar(k);
		if ((k + 1) == 58)
			continue;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
