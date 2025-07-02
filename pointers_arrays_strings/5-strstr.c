#include "main.h"
/**
 * _strstr - locate a string in a string
 * @haystack: the string we look
 * @needle: the string to find inside haystack
 * Return: pointer to the beginning of the located string, 0 otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (0);
}
