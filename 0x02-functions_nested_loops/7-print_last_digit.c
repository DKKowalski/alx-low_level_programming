#include "main.h"

/**
 * print_last_digit - computes the last digit of a number
 * @c: integer to compute absolute value of
 *
 * Return: the last digit of a number
 */
int print_last_digit(int c)
{
if (c < 0)
{
c = c * -1;
}
c = c % 10;
_putchar(c + '0');
return (c);
}

