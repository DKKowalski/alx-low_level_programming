#include <string.h>
/**
 * _puts - prints a string to stdout
 * @str: pointer to string to be printed
 * Return: void
 */
void _puts(char *str)
{
int i;
for (int i = 0; i < strlen(str); i++) {
putchar(str[i]);
}
}
