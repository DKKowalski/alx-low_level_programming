#include <string.h>
#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 *
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
int i;
for (i = 0; i <= (int)strlen(str - 1); i++)
{
if (i % 2 != 0)
{
continue;
}
_putchar(str[i]);
}
_putchar('\n');
}

