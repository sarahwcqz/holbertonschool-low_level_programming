#include "main.h"
#include <stdio.h>
/*
 * print_diagsums -  prints the sum of the two diags of a square matrix
 * @a: the matrix
 * @size: the size of the array, rows and columns
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int s1 = 0;
	int s2 = 0;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			if (i == j)
			{
				s1 = s1 + a[i * size + j];
			}
			if (i == size - (j + 1))
			{
				s2 = s2 + a[i * size + j];
			}
			j++;
		}
		i++;
	}
		printf("%i, %i\n", s1, s2);
}
