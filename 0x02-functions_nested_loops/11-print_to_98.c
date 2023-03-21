#include <stdio.h>

/**
 * print_to_98 - prints all integers from n to 98
 * @n: the starting integer
 *
 * This function prints all integers from n to 98, separated by commas and a
 * space, in ascending order if n is less than 98, or in descending order if
 * n is greater than 98. The integers are printed to standard output, with
 * each set of integers ending in a newline character.
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
printf("\n");
}

/**
 * main - entry point of the program
 *
 * This function calls the print_to_98 function with several different
 * arguments to demonstrate its use.
 *
 * Return: 0 on success
 */
int main(void)
{
print_to_98(0);
printf("\n");
print_to_98(98);
printf("\n");
print_to_98(111);
printf("\n");
print_to_98(81);
printf("\n");
print_to_98(-10);
return (0);
}

