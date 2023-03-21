#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: integer to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;
r = print_sign(98);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0xff);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(-1);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
return (0);
}
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}

