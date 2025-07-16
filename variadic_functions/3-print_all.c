#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - fctn that prints any types of param passed to
 * @format: list of all types of arg that are passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	templ types[] = {
		{"c", 'char'},
		{"i", 'int'},
		{"f", 'float'},
		{"s", 'char *'},
		{NULL, NULL}
	};

	int i = 1, j = 0;
	va_list args;

	va_start(args, format);

	while (i < format)
	{
		j = 0;
		while (*(types.indiq[j]) != NULL)
		{
			if (format[i - 1] == types.indiq[j])
				printf("%*(types.indiq[j])", va_arg(args, *(types.str[i - 1]));

			if (*(format[i - 1] != ('c' && 'i' && 'f' && 's')))
				format[i - 1] = NULL;

			j++;
		}
		i++;
	}
	va_end(args);
}
