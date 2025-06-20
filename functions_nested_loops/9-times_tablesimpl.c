#include "main.h"

void times_table(void)
{
    int x, y, p;

    for (x = 0; x < 10; x++)
    {
        for (y = 0; y < 10; y++)
        {
            p = x * y;

            if (y != 0)
            {
                _putchar(',');
                _putchar(' ');

                if (p < 10)
                    _putchar(' ');
            }

            if (p < 10)
                _putchar('0' + p);
            else
            {
                _putchar('0' + p / 10);
                _putchar('0' + p % 10);
            }
        }
        _putchar('\n');
    }
}

