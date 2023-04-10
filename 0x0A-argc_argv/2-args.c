#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
