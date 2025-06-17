#include <stdio.h>
/**
 * main - Entry point
	 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char LET = 'A';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (LET = 'A'; LET <= 'Z'; LET++)
	{
		putchar(LET);
	}
	putchar('\n');
	return (0);
}
