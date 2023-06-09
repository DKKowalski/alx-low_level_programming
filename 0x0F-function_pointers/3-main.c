#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 on success,
 *         98 on failure (wrong number of arguments),
 *         99 on failure (invalid operator), or 100 on failure
 *         (division/modulo by 0)
 */
int main(int argc, char **argv)
{
int a, b, result;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (EXIT_FAILURE);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
return (99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
return (100);
}

result = op_func(a, b);
printf("%d\n", result);
return (EXIT_SUCCESS);
}
