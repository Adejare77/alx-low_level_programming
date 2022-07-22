#include "main.h"

/**
 * main - program that prints the number of arguments
 * passed into it
 * @argc: size of the argument
 * @argv: array of the argument
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int n = 1;
	int count = 0;

	for (; argv[n] != NULL; n++)
		count += 1;
	printf("%d\n", count);

	return (0);
}
