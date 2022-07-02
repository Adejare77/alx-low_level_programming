#include <stdio.h>

/**
 * main - prints all possible different combination
 * of two digits.
 * The two digits must be different. e.g 01 and 10 are
 * considered the same
 *
 * Return: Always 0 means (success)
 */
int main(void)
{
	int i, j, k = 49;

	for (i = 48; i < 58; i++)
	{
		for (j = k; j < 58; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if ((i == 56) & (k == 57))
					break;
				putchar(',');
				putchar(' ');
			}
		}
		if ((i == 56) & (k == 57))
			break;
		k++;
	}
	putchar('\n');

	return (0);
}
