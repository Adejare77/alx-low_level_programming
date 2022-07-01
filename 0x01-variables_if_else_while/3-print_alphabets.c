#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * then in uppercase
 *
 * Return: Always 0 means (success)
 */
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	for (; lower_case <= 'z'; lower_case++)
		putchar(lower_case);
	for (; upper_case <= 'Z'; upper_case++)
		putchar(upper_case);
	putchar('\n');

	return (0);
}
