#include "main.h"
/**
 * times_table - prints the 9 times table
 * @i, j, p: int
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int p = i * j;

			if (i == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (p < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
				_putchar(',');
			}
			else if (j == 9)
			{
				_putchar(' ');
				_putchar('0' + p / 10);
				_putchar('0' + p % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + p / 10);
				_putchar('0' + p % 10);
				_putchar(',');
			}
		}
	_putchar('\n');
	}
}
