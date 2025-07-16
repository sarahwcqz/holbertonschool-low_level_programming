#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a string, numbers of string passed is specified
 * @separator: char that separates the strings
 * @n: number of strings passed to the fctn
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

		va_start(args, n);

		for (; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");

			else
			printf("%s", str);

			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		va_end(args);
	printf("\n");
}
