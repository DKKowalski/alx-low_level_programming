#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the product of argv
 * Description: This program multiplies two arguments passed to it as integers.
 * Return: Always 0 (Success)
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 */
int main(int argc, char *argv[])
{
int product;
if (argc < 3)
{
printf("Error\n");
return (1);
}
product = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", product);
return (0);
}
