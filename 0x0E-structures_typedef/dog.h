#ifndef __STRUCT__
#define __STRUCT__

#include <stdlib.h>

/**
 * struct dog - defines the following formal parameters
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: The user-defined type struct dog contains
 * three(3) variable, name, age and owner, with type
 * pointer to string, float and pointer to string respectively
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef with the alias name dog_t
 *
 * Description: This is a way of given the user-defined
 * data type an alias
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
