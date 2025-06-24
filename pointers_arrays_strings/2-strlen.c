#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s : array
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
