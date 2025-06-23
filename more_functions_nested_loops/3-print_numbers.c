#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * @n: int
 * Return: void
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
