#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds 2 int
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

 /**
 * op_sub - substract 2 int
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

 /**
 * op_mul - multiplies 2 int
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

 /**
 * op_div - divides 2 int
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

 /**
 * op_mod - a modulo b
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
