#include "main.h"

/**
 * print_square - prints square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int k = 0, j;

	if (size <= 0)
		_putchar('\n');
	while (k < size)
	{
		j = 0;
		for (; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
