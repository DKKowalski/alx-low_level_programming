#include "main.h"
/**
 * print_diagonal - prints a diagonal line of '\' characters,
 * followed by a newline character
 *
 * @n: length of the diagonal line to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}

}

