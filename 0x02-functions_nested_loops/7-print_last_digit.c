#include <stdio.h>

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
return (c);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;
r = print_last_digit(98);
printf("%d", r);
r = print_last_digit(0);
printf("%d", r);
r = print_last_digit(-1024);
printf("%d", r);
r = print_last_digit(-1024);
printf("%d", r);
putchar('\n');
return (0);
}

