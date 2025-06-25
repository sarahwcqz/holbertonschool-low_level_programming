#include "main.h"
/**
 * _strcpy - copies a pointed string to a pointed dest
 * @dest: pointer
 * @src: pointer
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
