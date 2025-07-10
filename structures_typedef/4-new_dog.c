#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: the age of the new dog
 * @owner: name of the provider
 * Return: a pointer to the struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;

	new_dog->owner = malloc(sizeof(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
