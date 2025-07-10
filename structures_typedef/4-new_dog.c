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
	int name_len, owner_len, i, j, n;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	i = 0;
	while (name[i] != 0)
		i++;
	name_len = i;
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	n = name_len;
	while (i < n)
	{
		new_dog->name[i] = name[i];
		i++;
	}
	j = 0;
	while (name[j] != 0)
		j++;
	owner_len = j;
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	n = owner_len;
	j = 0;
	while (j < n)
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
	new_dog->age = age;
	return (new_dog);
}
