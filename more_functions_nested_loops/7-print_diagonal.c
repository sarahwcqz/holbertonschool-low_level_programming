#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (x == y)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
