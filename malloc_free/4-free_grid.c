#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the 2 dim array created in previous task nb 3
 * @grid: pointer to the 2 dim array
 * @height: height of the arr
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
