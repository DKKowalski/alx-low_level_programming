#include "main.h"
/**
 * print_line - prints a line of n dashes, followed by a newline character
 *
 * @n: number of dashes to print
 *
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
{

_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}


}
