#include "main.h"
/**
 * reverse_array - reverses the content of an array of int
 * @a: pointr
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	while (i < n)
	{
		i++;
	}
	i--;

/** cond if % 2 != 0 ? */

	while (j < i)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j++;
		i--;
	}
}
