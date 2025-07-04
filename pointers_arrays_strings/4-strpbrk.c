#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched in
 * @accept: the set of bytes
 * Return: pointer to the first occurence, NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
