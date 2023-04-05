#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Prints a string in reverse order using recursion
 * @s: Pointer to the string to be printed in reverse order.
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
int i;
for (i = (strlen(s) - 1); s[i] != '\0'; i--)
{
_putchar(s[i]);
}
}
