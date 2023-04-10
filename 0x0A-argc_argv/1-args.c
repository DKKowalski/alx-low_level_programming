#include <stdio.h>
/**
 * main - prints the program total args
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d", argc - 1);

printf("\n");
return (0);
}
