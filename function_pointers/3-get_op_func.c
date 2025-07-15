#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - chooses which function to execute depending on the operator
 * @s: operator
 *
 * Return: pointer to the function that needs to be executed
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
