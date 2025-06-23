#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			if (x == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%i ", x);
		}
	}
	putchar('\n');
	return (0);
}
