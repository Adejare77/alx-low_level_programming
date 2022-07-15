#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int lowest = 0;
	int limit = n / 2;
	int temp;

	n -= 1;
	for (; lowest < limit; lowest++, n--)
	{
		temp = a[lowest];
		a[lowest] = a[n];
		a[n] = temp;
	}
}
