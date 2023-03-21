#include <stdio.h>

/**
 * times_table - Prints the times table of 8, up to 8 * 9.
 */
void times_table(void)
{
int i, multiple;

for (i = 0; i < 10; i++)
{
multiple = 9 * i;

printf("%d", multiple);

if (multiple != 0 && i != 9)
{
printf(",.");
}
if (multiple == 0)
{
printf(",..");
}
}
}

/**
 * main - Calls the times_table function and prints a newline character.
 *
 * Return: Always 0.
 */
int main(void)
{
times_table();
printf("\n");
return (0);
}

