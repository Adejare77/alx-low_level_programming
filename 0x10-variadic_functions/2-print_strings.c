#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define end va_end
#define start va_start
#define varg va_arg

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: Is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * if separator is NULL, don't print
 * if one of the string is NULL, print (nil) instead
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = varg(strings, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);

	}
	printf("\n");
}
