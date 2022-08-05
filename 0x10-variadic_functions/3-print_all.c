#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

#define start va_start
#define varg va_arg
#define end va_end

/**
 * print_all - function that prints anything
 * @format: constant variable pointer that cannot
 * dereference nor change address
 * if string is NULL, print (nil), instead any other char should be ignored
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int num = 0;
	void result;

	while (*(format + num))
		num++;
	va_list all;

	start(all, format);
	while (i < num)
	{
		if (format[i] == 'c')
		{
			result = (void *)varg(all, char);
			printf(result);
		}
		if (format[i] == 'i')
		{
			result = (void *)varg(all, int);
			printf(result);
		}
		if (format[i] == 'f')
		{
			result = (void *)varg(all, float);
			printf(result);
		}
		if (format[i] == 's')
		{
			(char *)result = var(all, char *);
			printf(result);
		}
		i++;
	}
	printf("\n");
}

