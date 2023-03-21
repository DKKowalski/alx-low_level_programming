#include "main.h"
/**
 * print_alphabetx10 - Print alphabet 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char x_ter;
int i;
for (i = 0; i <= 10; i++)
{
for (x_ter = 'a'; x_ter <= 'z'; x_ter++)
{
_putchar(x_ter);

}
_putchar('\n');
}


}

