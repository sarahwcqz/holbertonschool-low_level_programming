#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the n elements of an array
 * @a: pointer
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n >= 0)
	{
	while (i < n - 1)
	{
		printf("%i, ", a[i]);
		i++;
	}
	printf("%i", a[i]);
	printf("\n");
	}
}
