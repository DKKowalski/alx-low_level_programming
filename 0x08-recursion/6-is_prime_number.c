/**
 * is_prime_helper - Helper function to check if a number is prime recursively
 * @n: The number to be checked
 * @i: The number to start checking from
 * Return: 1 if @n is prime, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - Checks if a number is prime recursively
 * @n: The number to be checked
 * Return: 1 if @n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (is_prime_helper(n, n - 1));
}
