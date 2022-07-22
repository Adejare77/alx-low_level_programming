#include "main.h"

/**
 * main - Programm that prints all arguments it receives
 * @argc: size of the arguments
 * @argv: array of the arugment
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 1;

	for (; argv[i] != NULL; i++)
		printf("%s\n", argv[i]);

	return (0);
}
