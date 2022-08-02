#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 * Description: if an element of d is NULL, print (nil) instead of
 * this element. (if name is NULL, print Name: (nil)). if d is NULL
 * print nothing
 */
void print_dog(struct dog *d)
{
	struct dog *point = d;

	if (point)
	{
		if (point->name == NULL)
			point->name = "(nil)";
		if (point->owner == NULL)
			point->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", point->name,
				point->age, point->owner);
	}
}
