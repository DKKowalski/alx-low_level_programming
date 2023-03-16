#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char a;
long int b;
long long int c;
float d;

printf("Size of a char: %d byte(s)\n", sizeof(i));
printf("Size of an int: %d byte(s)\n", sizeof(a));

printf("Size of a long int: %d byte(s)\n", sizeof(b));

printf("Size of a long long int: %d byte(s)\n", sizeof(c));

printf("Size of a float: %d byte(s)\n", sizeof(d));

return (0);
}
