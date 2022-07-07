#include "main.h"

/**
 * largest_number - prints the largest of three integers
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: 0 means success
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	if (b >= a && b >= c)
		largest = b;
	if (c >= a && c >= b)
		largest = c;

	return (largest);
}
