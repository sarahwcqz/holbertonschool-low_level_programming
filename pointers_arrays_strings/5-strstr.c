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
	char *ptr = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
/* faire le if d'abord?
 * if hayst[i] == need[j]
 * => while 
 */
			if (haystack[i] != needle[j])
			{
				break;
			}
			else
			{
				flag = 1;
			}
			j++;
			i++;
		}
		i++;
	}
	return (ptr);
}
