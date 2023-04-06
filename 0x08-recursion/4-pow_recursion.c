/**
 * _pow_recursion - Calculates the value of x raised to
 * the power of y using recursion.
 * @x: The base integer.
 * @y: The exponent integer.
 * Return: The value of x raised to the power of y.
 * If y is negative, return -1.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, (y - 1)));
}
