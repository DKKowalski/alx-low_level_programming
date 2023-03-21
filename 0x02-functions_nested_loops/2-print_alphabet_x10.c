#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x_ter;
int i;
for (i = 0; i <= 10; i++)
{
for (x_ter = 'a'; x_ter <= 'z'; x_ter++)
{
putchar(x_ter);
}
}
putchar('\n');

return (0);
}

