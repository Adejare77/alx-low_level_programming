#include "main.h"

/**
 * main - Program that multiplies two numbers
 * @argc: The size of the command line argument
 * @argv: The array of the command line argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n = argc;
	int v;

	if (n != 3)
	{
		printf("Error\n");
		return (1);
	}
	v = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", v);

	return (0);
}

