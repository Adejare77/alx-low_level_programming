#include "main.h"

/**
 * main - Programm that prints all arguments it receives
 * @argc: size of the arguments
 * @argv: array of the arugment
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
