#include "main.h"

/**
 * main - Program that adds positive numbers
 * @argc: The size of the command line arguments
 * @argv: The array of the command line arguments
 *
 * Return: Alwyas 0
 */
int main(int argc, char *argv[])
{
	int n = 1, j = 0, val = 0;

	for (; n < argc; n++)
	{
		for (; argv[n][j] != '\0'; j++)
		{
			if (!isdigit(argv[n][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		val += atoi(argv[n]);
	}
	printf("%d\n", val);
	return (0);
}
