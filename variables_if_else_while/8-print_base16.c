#include <stdio.h>
/**
 * main - Entry point
	 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
