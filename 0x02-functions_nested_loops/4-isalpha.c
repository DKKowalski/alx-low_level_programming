#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise
 */
int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;

r = _isalpha('H');
putchar(r + '0');
r = _isalpha('o');
putchar(r + '0');
r = _isalpha(108);
putchar(r + '0');
r = _isalpha(';');
putchar(r + '0');
putchar('\n');
return (0);
}

