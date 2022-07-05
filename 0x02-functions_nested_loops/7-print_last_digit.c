#include "main.h"


/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int k = n % 10;

	if (k < 0)
	{
		k = -k;
	}
	_putchar(k + '0');

	return (k);
}
