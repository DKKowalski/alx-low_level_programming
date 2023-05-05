/**
 * get_bit - Gets the value of a bit at a given index
 *
 * @n: The number to extract the bit from
 * @index: The index of the bit to extract
 *
 * Return: The value of the bit at the specified
 * index - 0 or 1, or -1 if index is
 * >= to the number of bits in an unsigned long int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
	return (-1);

unsigned long int  num_right_zeros = 1 << index;

return ((n & num_right_zeros) != 0);
}

