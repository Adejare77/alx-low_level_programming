#include "main.h"

/**
 * print_to_98 - prints all natural numbers from
 * n to 98.
 * @n: number to start from
 *
 * Return: void
 */
void less_than_98(int n);

void print_to_98(int n)
{
	int w, t;

	if (n <= 98)
		less_than_98(n);
	else
	{
		for (; n > 98; n--)
		{
			t = 1;
			while ((t * 10) <= n)
				t *= 10;
			w = n;
			while (t != 1)
			{
				_putchar((w / t) + '0');
				w %= t;
				t /= 10;
			}
			_putchar(w + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');
}

/**
 * less_than_98 - if it is greater than 0
 * @n: The number to start from
 *
 * Return: void
 */
void less_than_98(int n)
{
	int w, t, r;

	for (; n < 98; n++)
	{
		if ((n >= 0) & (n < 10))
			_putchar(n + '0');
		if (n < 0)
		{
			_putchar('-');
			w = -n;
			t = 1;
			while ((t * 10) <= w)
				t *= 10;
			while (t != 1)
			{
				_putchar((w / t) + '0');
				w %= t;
				t /= 10;
			}
			_putchar(w + '0');
		}
		if (n > 9)
		{
			r = n % 10;
			w = n / 10;
			_putchar(w + '0');
			_putchar(r + '0');
		}
		_putchar(',');
		_putchar(' ');
	}

}
