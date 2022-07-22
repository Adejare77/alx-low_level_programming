#include "main.h"

/**
 * main - function that prints its own name
 * @argc: size of the command line argument
 * @argv: array of the command line argument
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int n = 0;
	char *s = argv[0];

	for (; s[n] != '\0'; n++)
		putchar(s[n]);
	putchar('\n');

	return (0);
}
