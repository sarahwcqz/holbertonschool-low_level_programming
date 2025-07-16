#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct template - struct containing allowed char and matching type
 * @indiq: character
 * @str: the matching type
 */
typedef struct template
	{
		char indiq;
		char *str;
	} templ;

#endif
