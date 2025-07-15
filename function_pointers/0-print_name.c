#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: the name to print
 * @f: the function that prints the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
