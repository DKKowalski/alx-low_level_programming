#include "main.h"
#include <string.h>
/**
 * _puts - prints a string to stdout
 * @str: pointer to string to be printed
 * Return: void
 */
void _puts(char *str)
{
long unsigned int i;
for (i = 0; i < strlen(str); i++) {
_putchar(str[i]);
}
}
