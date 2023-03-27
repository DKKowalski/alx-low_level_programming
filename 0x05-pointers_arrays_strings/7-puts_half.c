#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
int i;
for (i = (((int)strlen(str) - 1) / 2) + 1; i <= (int)strlen(str) - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
