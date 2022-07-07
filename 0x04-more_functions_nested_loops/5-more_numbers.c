#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j, w, r;

	while (i < 10)
	{
		j = 0;

		for (j; j < 15; j++)
		{
			w = j / 10;
			r = j % 10;
			if (w > 0)
				_putchar(w + '0');
			_putchar(r + '0');
		}
		_putchar('\n');
		i++;
	}
}
