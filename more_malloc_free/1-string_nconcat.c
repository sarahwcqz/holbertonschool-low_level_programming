#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first str
 * @s2: second str
 * @n: the number of of elements of s2 to be added to s1
 * Return: a pointer to the newly allocated space in mem, or 0 if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t1 = 0;
	unsigned int t2 = 0;
	unsigned int i, j;
	char *s = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[t1] != '\0')
		t1++;

	while (s2[t2] != '\0')
		t2++;

	if (n > t2)
		n = t2;

	s = malloc(sizeof(char) * (t1 + n + 1));
		if (s == 0)
			return (0);

	for (i = 0; i < t1; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
