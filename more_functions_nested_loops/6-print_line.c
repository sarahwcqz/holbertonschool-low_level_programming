#include "main.h"
/**
 * print_line - drwas a straight line in term
 * @n: int
 * Return: void
 */
void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
