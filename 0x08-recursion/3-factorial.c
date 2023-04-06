/**
 * factorial - computes the factorial of a given number using recursion.
 * @n: The number to calculate the factorial of.
 * Return: The factorial of n. If n is less than 0,
 * return -1 to indicate an error.
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
