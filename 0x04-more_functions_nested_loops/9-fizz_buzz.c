#include <stdio.h>
/**
 * fizzBuzz - Prints numbers from 1 to 100,
 * replacing multiples of 3 with "Fizz",
 *
 * multiples of 5 with "Buzz",
 * and multiples of both 3 and 5 with "FizzBuzz".
 *
 * Return: void
 */
void fizzBuzz(void)
{
int j;

for (j = 1; j <= 100; j++)
{
if (j % 15 == 0)
{
printf("FizzBuzz ");
}
else if (j % 5 == 0)
{
printf("Buzz ");
}
else if (j % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", j);
}
}
}

/**
 * main - Calls the fizzBuzz function.
 * Return: Always 0
*/
int main(void)
{
fizzBuzz();
printf("\n");
return (0);
}
