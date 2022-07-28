#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "";
	char *f = "dfdkf";
	char *t;

	t = strstr(s, f);
	printf("%s\n", t);

	return (0);
}
