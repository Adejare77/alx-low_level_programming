#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack
 * Bauer, starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, t, j, k = 0;

	while (k < 3)
	{
		t = 0;
		for (; t < 4; t++)
		{
			i = 0;
			for (; i < 6; i++)
			{
				j = 0;
				for (; j < 10; j++)
				{
					_putchar(k + '0');
					_putchar(t + '0');
					_putchar(':');
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar('\n');
				}
			}
		}
		k++;
	}
}
