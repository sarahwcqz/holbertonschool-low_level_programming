#include "main.h"
/**
 * redo of task 8 using while because still blury for me
 */
void print_square(int size)
{
	int x = 0;

	while (x < size)
	{
		int y = 0;

		while (y < size)
		{
			_putchar('#');
			y++;
		}
	_putchar('\n');
	x++;

	}
}
