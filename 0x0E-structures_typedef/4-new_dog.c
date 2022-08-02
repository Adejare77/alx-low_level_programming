#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: The name of the owner of the dog
 *
 * Return: NULL if the function fails
 * Description: You have to store a copy of name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_info;
	int i = 0, j = 0;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dog_info = malloc(sizeof(*dog_info) + 2);
	if (dog_info == NULL)
	{
		free(dog_info);
		return (NULL);
	}

	for (; name[i] != '\0'; i++)
	{
		dog_info->name[i] = name[i];
		if (dog_info->name == NULL)
		{
			free(dog_info->name);
			free(dog_info);
		}
	}
	dog_info->name[i] = '\0';

	for (; owner[j] != '\0'; j++)
	{
		dog_info->owner[j] = '\0';
		if (dog_info->owner == NULL)
		{
			free(dog_info->owner);
			free(dog_info->name);
			free(dog_info);
		}
	}
	dog_info->owner[j] = '\0';

	dog_info->age = age;

	return (dog_info);
}
