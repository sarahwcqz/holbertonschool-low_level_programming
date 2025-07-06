#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates the mem of an arr in initialize it with 0
 * @nmemb: number of elements
 * @size: the size of the elements
 * Return: pointer to the allocated mem, NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	memset(ptr, 0, (size * nmemb));

	return (ptr);
}
/**
 * version avec memset, permet d'avoir un ptr de type void,
 * mais pas sure que ca passe le checkeur
 */
