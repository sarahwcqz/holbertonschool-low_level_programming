#include "variadic_functions.h"

 /*----------------------functions for each type--------------------------*/

 /**
  * print_char - function that prints if it is a char
  * @args: the list of arguments that you passed to the fctn
  * Return: void
  */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

 /**
  * print_int - function that prints if it is a integer
  * @args: the list of arguments that you passed to the fctn
  * Return: void
  */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

 /**
  * print_float - function that prints if it is a float
  * @args: the list of arguments that you passed to the fctn
  * Return: void
  */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

 /**
  * print_string - function that prints if it is a str of char
  * @args: the list of arguments that you passed to the fctn
  * Return: void
  */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

/*	if (str == NULL) */
/*		str = "(nil)"; */
	printf("%s", str);
}

/*--------------------------------------------------------------------*/
/*									main fctn                           */
/*-------------------------------------------------------------------------*/

/**
 * print_all - main function; prints whatever arg you pass, dependg on the type
 * (type is specified by a letter enterred in first arg)
 * @format: the arg that specifies with types you entered
 * Return: void
 */
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
/*se deplace dans le 1er arg ; la str qui specifie le type des arg suivants */
	while (format[i] != '\0' && format)
	{
		j = 0;
 /*se deplace dans la struct*/
		while ((types[j].indiq) != NULL)
		{
			/* si le char en arg0 match un des char de la struct */
			if (format[i] == (*types[j].indiq))
			{
				types[j].print(args);
/* print the comma and space ONLY IF it's not the last arg to be printed */
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
