#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
char *start = s;
char *end = s + strlen(s) - 1;

while (start < end) {
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}

_putchar('\n');
}
