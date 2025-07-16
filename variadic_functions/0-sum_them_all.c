#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - variadic fctn that returns the sum of its param
 * @n: first param
 * Return: 0 if n = NULL, the sum of param otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, x = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	x = x + va_arg(args, unsigned int);

	va_end(args);

	return (x);
}
