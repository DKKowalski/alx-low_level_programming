#include <string.h>

/**
 * _strncpy - copies n number of strings
 * @dest: destination string
 * @src: source string
 * @n: number of string to copy
 * Return: pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;


for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
