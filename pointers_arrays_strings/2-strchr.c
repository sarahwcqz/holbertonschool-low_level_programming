#include "main.h"
/**
 * _strchr - finds a specific char in a string
 * @s: the string to search in
 * @c: the char we want to find
 * Return: pointer to the first occurence, if none, NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
