/**
 * leet - encodes a string into 1337.
 * @str: pointer to a string.
 * Return: pointer to a string.
*/
char *leet(char *str)
{
int i, j;
char leet_map[] = {'4', '3', '0', '7', '1'};
char leet_chars[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_map[j % 5];
break;
}
}
}

return (str);
}
