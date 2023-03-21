i#include <stdio.h>

/**
 * add - Adds two integers.
 * @num1: The first integer to add.
 * @num2: The second integer to add.
 *
 * Return: The result of the addition.
 */
int add(int num1, int num2)
{
return (num1 + num2);
}

/**
 * main - Calls the add function and prints the result.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

n = add(89, 9);
printf("%d\n", n);
return (0);
}

