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
if (n == 0)
{
return (0);
}

int i, sum = 0;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);

return (sum);
}
