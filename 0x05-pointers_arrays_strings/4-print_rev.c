#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string to stdoutin reverse
 * @s: pointer to string to be printed
 * Return: void
 */
void print_rev(char *s)
{
unsigned long int i;
for (i = strlen(s); i >= 0; i--)
{
_putchar(s[i]);

}
_putchar('\n');
}
