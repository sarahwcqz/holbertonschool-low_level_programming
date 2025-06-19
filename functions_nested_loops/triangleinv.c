#include <stdio.h>
int main(void)
{
int x, y;

for (x = 0; x < 5; x++)
{
	for (y = 0; y < 5; y++)
	{
		if (y < x)
		{
			putchar(' ');
		}
		else
		{
			putchar('#');
		}
	}
	putchar('\n');
}
}
