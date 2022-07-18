#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: size of the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	long unsigned int i = 0;
	int j;

	for (; i < sizeof(*a); i++)
	{
		j = 0;
		for (; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
