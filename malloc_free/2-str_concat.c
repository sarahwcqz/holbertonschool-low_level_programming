#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenantes two strings
 * @s1: the first string
 * @s2: the second one
 * Return: pointer to the result
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
