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
printf("Size of a char: %zu\n Size of an int: %zu\n Size of a long int: %zu\n Size of a long long int: %zu\n Size of a float: %zu\n", sizeof(i), sizeof(a), sizeof(b), sizeof(c), sizeof(d));
return (0);
}
