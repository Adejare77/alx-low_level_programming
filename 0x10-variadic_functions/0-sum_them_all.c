#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: unsigned int that does not vary (constant)
 *
 * Return: if n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int k;

	va_start(args, n);
	for (k = 0; k < n; k++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
