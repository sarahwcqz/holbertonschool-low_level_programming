#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char and init it w/ a specific char
 * @c: the char to be init with
 * @size: the size of the array
 * Return: pointer to the array, 0 if fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (0);
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (0);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
