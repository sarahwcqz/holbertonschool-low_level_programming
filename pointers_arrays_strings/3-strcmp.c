#include "main.h"
/**
 * _strcmp - compares 2 str
 * @s1: pointer
 * @s2: pointr
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
