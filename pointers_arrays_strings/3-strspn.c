#include "main.h"
/**
 * _strspn - find the length of the init segmnt of a string
 * containing only chars from a given set
 * @s: the string
 * @accept: the set of allowed char
 * Return: the number of consecutive bytes allowed
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (accept[j] != '\0') 
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				n = n + 1;
			}
			j++;
		}
		if (flag == 0)
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (n);

}
