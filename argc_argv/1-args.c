#include <stdio.h>
/**
 * main - entry point, prgm that prints the numbr of args passed into it
 * @argc: numbr of args
 * @argv: array containing the args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc == 0)
		printf("0");
	else
		printf("%d\n", argc - 1);
	return (0);
}
