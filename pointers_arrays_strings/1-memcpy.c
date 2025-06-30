#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the area where to put the copied area
 * @src: the aera to be copied
 * @n: the number of bytes to be copied
 * Return: dest, the result of copied area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
