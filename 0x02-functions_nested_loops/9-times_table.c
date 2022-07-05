#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, j, t, n, r;

	while (i < 10)
	{
		for (j = 0; j < 10; j++)
		{
			t = i * j;

			if ((j > 0) & (j < 10))
			{
				_putchar(',');
				_putchar(' ');
				if (t < 10)
					_putchar(' ');
			}

			if (t < 10)
				_putchar(t + '0');

			if (t >= 10)
			{
				n = t / 10;
				r = t % 10;
				_putchar(n + '0');
				_putchar(r + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
