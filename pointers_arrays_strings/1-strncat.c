#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @n: int
 * @dest: pointer
 * @src: pointer
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j <= n - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
