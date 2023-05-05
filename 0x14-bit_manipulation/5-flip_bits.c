/**
 * flip_bits - Counts the number of bits
 * needed to flip to convert one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int sum = 0;

while (xor_result > 0)
{
sum += xor_result & 1;
xor_result >>= 1;
}

return (sum);
}

