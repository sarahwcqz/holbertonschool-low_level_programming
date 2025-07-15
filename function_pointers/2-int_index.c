#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: the array in which to look for
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare value
 * Return: first element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == 0 || array == 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
		return (-1);
}
