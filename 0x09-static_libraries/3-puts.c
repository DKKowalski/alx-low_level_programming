#include "main.h"
#include <string.h>
/**
 * _puts - prints a string to stdout
 * @str: pointer to string to be printed
 * Return: void
 */
void _puts(char *str)
{
unsigned long int i;
for (i = 0; i < strlen(str); i++)
{
_putchar(str[i]);

}
_putchar('\n');
}
