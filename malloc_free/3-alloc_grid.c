#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointr to a 2 dim arr of int
 * @width: int
 * @height: int
 * Return: pointer to the arr, 0 if failed, 0 if width or height <= 0
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (0);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == 0)
		return (0);

	while (i < height)
	{

		j = 0;
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == 0)
		{
			while (j < i)
				free(ptr[j]);
			free(ptr);
			return (0);
		}
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
