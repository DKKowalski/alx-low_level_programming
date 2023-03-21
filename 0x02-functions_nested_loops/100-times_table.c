#include <stdio.h>

/**
 * print_times_table - Prints the multiplication table up to n.
 *
 * @n: The number of rows and columns in the table.
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
int i, j, multiple;
if (n < 15 && n > 0)
{
for (j = 0; j <= n; j++)
{
for (i = 0; i <= n; i++)
{
multiple = j * i;
printf("%d", multiple);
if (i != n)
{
printf(", ");
}
}
printf("\n");
}
}
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
print_times_table(3);
putchar('\n');
print_times_table(5);
putchar('\n');
print_times_table(98);
putchar('\n');
print_times_table(12);
return (0);
}

