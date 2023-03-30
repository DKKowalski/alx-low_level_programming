/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: A pointer to the modified string
 */
#include <ctype.h>

char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
/* Check if the current character is a separator or the first character */
if (isspace(str[i]) || str[i] == '.' || i == 0)
{
/* Check if the next character is lowercase */
if (str[i + 1] >= 97 && str[i + 1] <= 122)
{
str[i + 1] -= 32;  /* Capitalize the next character */
}
}
}

return (str);
}

