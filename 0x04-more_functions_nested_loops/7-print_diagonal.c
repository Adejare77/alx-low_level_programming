#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of character \ go be drawns
 * if n is 0 or less, print \n
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, k = 0;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		while (k < i)
		{
			_putchar(' ');
			k++;
		}
		k = 0;
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
