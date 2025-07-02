#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive nmbrs given in the cmd line
 * @argc: the number of arg given (should be 3)
 * @argv: the array containing the args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;
	int sum = 0;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
/*
 * besoin de le faire en 2 fois?
 * Parcourir pour trouver une erreur
 * PUIS si pas d'erreur, parcourir pour add
 * ?
 * Ou bien peut tout faire dans la meme boucle?
 */
	return (0);
}
