#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - prints a string to stdoutin reverse
 * @s: pointer to string to be printed
 * Return: void
 */
void rev_string(char *s)
{
int i;
for (i = (int)strlen(s); i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
