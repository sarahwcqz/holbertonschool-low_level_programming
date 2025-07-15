#include "function_pointers.h"
/**
* array_iterator - exe a fctn given as a parameter on each elemnt of arr
* @array: the array
* @size: size of the array
* @action: the function to exe
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
