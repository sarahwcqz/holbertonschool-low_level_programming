#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array
 * @size: size of the array
 * @(*action)(int)
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i = 0;

    while (i < size)
    {
        action(i);
        i++;
    }
}