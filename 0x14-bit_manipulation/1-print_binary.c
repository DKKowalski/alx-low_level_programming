/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: the number to be printed in binary
 *
 * Description: This function prints the binary
 * representation of a number,
 * starting with the leftmost non-zero bit.
 * It first calculates the leftmost
 * bit in the number, and counts the number of left zeros.
 * It then prints the remaining bits
 * starting from the leftmost non-zero bit.
 */

#include <stdio.h>

void print_binary(unsigned long int n)
{
unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);
int num_of_left_zeros = 0;


while ((i & n) == 0 && i != 0)
{
	num_of_left_zeros++;
	i = i >> 1;
}


for (; i > 0; i = i >> 1)
	(n & i) ? printf("1") : printf("0");
}

