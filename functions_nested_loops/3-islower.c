#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
