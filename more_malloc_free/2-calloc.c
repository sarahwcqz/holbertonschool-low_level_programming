#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates the mem of an arr in initialize it with 0
 * @nmemb: number of elements
 * @size: the size of the elements
 * Return: pointer to the allocated mem, NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
/* version a la mano, mais oblige a un ptr de type int, pas tres coherent*/
