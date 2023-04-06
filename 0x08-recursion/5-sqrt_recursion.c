/**
 * _sqrt_helper - Recursively find the natural square root of a number.
 * @n: The number to find the square root of.
 * @start: The starting value to search from.
 * @end: The ending value to search to.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid;
mid = (start + end) / 2;
if (mid *mid == n)
{
return (mid);
}
if (start >= end)
{
return (-1);
}
if (mid *mid < n)
{
return (_sqrt_helper(n, mid + 1, end));
}
else
{
return (_sqrt_helper(n, start, mid - 1));
}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_helper(n, 1, n));
}
