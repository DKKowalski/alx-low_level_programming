#include "main.h"

/**
 * print_to_98 - Prints the times table of 8, up to 8 * 9.
 */
void print_to_98(int n)
{
int i;

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

