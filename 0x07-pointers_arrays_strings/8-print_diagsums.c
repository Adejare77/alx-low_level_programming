#include "main.h"

/**
 * print_diagsums - function that prints the sum of two
 * diagonals of a square matrix of integers
 * @a: shape of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, n = size - 1;
	int sum_1 = 0, sum_2 = size, res = 0;

	while (i < (size * *2))
	{
		sum_1 += a[i];
		i += size + 1;

		sum_2 = a[n];
		n += size - 1;
	}
}
