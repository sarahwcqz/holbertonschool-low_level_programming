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

	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	i--;
	if (n > i)
	{
		while (i <= n)
		{
			dest[i]='\0';
			i++;
		}
	}
	return (dest);
}
