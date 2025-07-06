#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of int
 * @min: the minimum value (incl)
 * @max: the maximum value (incl)
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i = 0;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * size);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
