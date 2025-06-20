#include "main.h"
/**
 * times_table - prints the 9 times table
 * @x, y, p: int
 * Return: void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int p = x * y;

			if (y == 0)
			{
				_putchar('0' + p);
				_putchar(',');
			}
			else if (y == 9)
			{
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + p);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
			}
			else
			{
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + p);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
					_putchar(',');
				}
			}
		}
	_putchar('\n');
	}
}
