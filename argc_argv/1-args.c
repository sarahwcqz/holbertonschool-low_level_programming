#include <stdio.h>
/**
 * main - entry point, prgm that prints the numbr of args passed into it
 * @argc: numbr of args
 * @argv: array containing the args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 1;

	while (i < argc - 1)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
