#include "main.h"
/**
 * puts2 - prints every other char of a str
 * @str: pointer
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
