#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct template - struct containing allowed char and matching type
 * @indiq: character
 * @print: fonction that will print the arg depending on the type
 * Return: void
 */
typedef struct template
	{
		char *indiq;
		void (*print)(va_list args);
	} templ;

#endif
