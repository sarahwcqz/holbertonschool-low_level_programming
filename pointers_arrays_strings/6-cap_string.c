#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: pointer
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char tab[] = {' ', '\t', '\n', ',', ';', 
		'.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
		if (s[i - 1] == tab[j] && s[i] > 96 && s[i + 1] < 123)
		{
			s[i] = s[i] - 32;
			j++;
		}
		}
		i++;
	}
	return (s);
}
