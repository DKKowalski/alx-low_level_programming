#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints the times table of 8, up to 8 * 9.
 * @n: the character to check
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
