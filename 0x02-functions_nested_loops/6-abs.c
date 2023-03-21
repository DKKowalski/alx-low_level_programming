#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @c: integer to compute absolute value of
 *
 * Return: absolute value of integer
 */
int _abs(int c)
{
if (c < 0)
{
c = c * -1;
}
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

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
