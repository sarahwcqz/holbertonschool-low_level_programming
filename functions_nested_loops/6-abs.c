#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @int: int
 * Return: 0
 */
int _abs(int i)
{
	int j;

	if (i < 0)
	{
		j = i * (-1);
		_putchar(j);
	}
	else
	{
		_putchar(i);
	}
	return (0);
}
