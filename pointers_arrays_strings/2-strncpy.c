#include "main.h"
/**
 * _strncpy - cp a str
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (i <= n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
