#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the mem area
 * @b: the constant byte to by filled with
 * @n: number of elements to be filled
 * Return: s, pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
