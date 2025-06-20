#include "main.h"

/**
 * print_times_table - prints the n times table
 *@n: int
 * Return: void
 */
void print_times_table(int n)
{
	int x, y;
if (n > 0 && n < 15)
{
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			int p = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + p);
				}
				else if (p < 100)
				{
					_putchar(' ');
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
				else
				{
					_putchar('0' + p / 100);
					_putchar('0' + (p / 10) % 10);
					_putchar('0' + p % 10);
				}
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
}
