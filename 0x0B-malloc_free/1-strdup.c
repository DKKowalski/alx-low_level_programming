#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * @str: input string to duplicate
 * Return: pointer to the duplicated string,
 * or NULL if insufficient memory was available
 * or if str is NULL
 */

char *_strdup(char *str)
{
char *newStr;

if (str == NULL)
{
return (NULL);
}

newStr = malloc(strlen(str) + 1);

if (newStr == NULL)
{
return (NULL);
}

strcpy(newStr, str);

return (newStr);
}




