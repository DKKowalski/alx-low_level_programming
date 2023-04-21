#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of a variable number of integers
 *
 * @n: The number of integers to sum
 *
 * Return: The sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
int i;
int sum;
if (n == 0)
{
return (0);
}
va_start(list, n);
for (i = 0; i < (int) n; i++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
