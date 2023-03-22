#include "main.h"

/**
 * times_table - Prints the times table of 8, up to 8 * 9.
 */
void times_table(void)
{
int i, j, result;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 10; i++)
{
result = j * i;
if (result > 9)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
if (i != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
