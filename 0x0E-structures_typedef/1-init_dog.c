#include "dog.h"

/**
 * init_dog - function that inititalize the variable type
 * struct dog
 * @d: pointer to the address of the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *point = d;

	if (d)
	{
		point->name = name;
		point->age = age;
		point->owner = owner;
	}
}
