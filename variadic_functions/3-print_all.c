#include "variadic_functions.h"

/**
 * print_all - fctn that prints any types of param passed to
 * @format: list of all types of arg that are passed
 * Return: void
 */

 /*----------------------functions for each type--------------------------*/
 /**
  * print_char - prints if it is a char
  * @
  * Return: void
  */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print int - prints if it is an int
 *
 *  Return: void
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}


void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/*---------------------------main fctn-----------------------------------*/
	void print_all(const char * const format, ...)
{

/*----struct that associates each type w/ correspdng function ------*/
	templ types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};


	int i = 0, j = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0' && format)
	{
		j = 0;
		while ((types[j].indiq) != NULL)
		{
			if (format[i] == (*types[j].indiq))
				types[j].print(args);
			j++;
		}
		i++;
	}
	va_end(args);
}
