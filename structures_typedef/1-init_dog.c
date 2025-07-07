#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize a var of type struct dog
 * @d: the struct name
 * @name: a pointer to the var containing the name of the dog
 * @age: the age of the dog
 * @owner: the name of the provider for the dog
 * Return: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
