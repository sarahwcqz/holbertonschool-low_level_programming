#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a ptr to a newly allocatd mem space, containing a cp of a
 * given string
 * @str: the given string to copy
 * Return: a pointer to the new string, 0 if failed
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *ptr;

	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == 0)
		return (0);
	for (j = 0; j <= i; j++)
		ptr[j] = str[j];
	return (ptr);
}
