#include "main.h"
/**
 * _atoi - convert a string to an int
 * @s: pointer
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int nb = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			nb = nb * 10 + (s[i] - '0'); 
		}
		i++;
	}
	return (nb * sign);
}
