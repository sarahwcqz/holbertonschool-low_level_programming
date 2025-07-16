#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - variadic fnctn that prints numbers,
 *  takes param of differents types
 * @separator: separator (ex: ', ') to be printed between every numbers
 * @n: number of int passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (separator != NULL)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%i", va_arg(args, int));
			printf("%s", separator);
			i++;
		}
		printf("\n");
	}
}
