#include "main.h"

/**
 * times_table - Prints the times table of 8, up to 8 * 9.
 */
void times_table(void)
{
int i, result;

for (i = 0; i <= 10; i++)
{
result = i * 9;
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
_putchar('\n');
}
}

