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

printf("Size of a char: %zu\n", sizeof(i));
printf("Size of an int: %zu\n", sizeof(a));

printf("Size of a long int: %zu\n", sizeof(b));

printf("Size of a long long int: %zu\n", sizeof(c));

printf("Size of a float: %zu\n", sizeof(d));

return (0);
}
