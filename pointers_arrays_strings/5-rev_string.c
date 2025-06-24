#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
