/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string, NULL on failure
 */
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
char *catStr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

catStr = malloc((strlen(s1)) + (strlen(s2)) + 1);
if (catStr == NULL)
{
return (NULL);
}

strcpy(catStr, s1);
strcat(catStr, s2);

return (catStr);
}
