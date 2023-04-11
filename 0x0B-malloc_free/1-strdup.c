/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * @str: input string to duplicate
 * Return: pointer to the duplicated string,
 * or NULL if insufficient memory was available
 * or if str is NULL
 */

#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
char *newStr;

if (str == NULL)
{
return (NULL);
}

newStr = malloc(strlen(char) + 1);

if (newStr == NULL)
{
return (NULL);
}

strcpy(newStr, str);

return (newStr);
}




