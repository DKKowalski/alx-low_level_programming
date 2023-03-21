#include "main.h"

/**
 * times_table - Prints the times table of 8, up to 8 * 9.
 */
void times_table(void)
{
int i;
int n = 9;
for (i = n; i <= 98; i++)
{
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar(' ');
}
_putchar('\n');
}

