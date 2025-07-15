#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arg inpted
 * @argv: array containing the arg inpted
 * Return: void
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;

/** les cas particuliers qui doivent print une erreur */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] == (43 || 45 || 42 || 47 || 37))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == 47 || *argv[2] == 25) && *argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

/** isoler a + isoler b + isoler op */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

/** print le resultat */
	printf("%i\n", get_op_func(argv[2])(a, b));

	return (0);
}
