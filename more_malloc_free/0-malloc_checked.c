#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates mem using malloc, terminates using exit if fail
 * @b: the size we want to allocate
 * Return: pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
