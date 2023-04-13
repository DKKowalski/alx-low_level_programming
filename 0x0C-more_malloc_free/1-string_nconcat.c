#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: A pointer to a newly allocated space in memory containing s1,
 *         followed by the first n bytes of s2, and null terminated.
 *         If the function fails, it should return NULL.
 *         If n is greater or equal to the length of s2 then
 *         use the entire string s2.
 *         If NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *catStr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	catStr = malloc(s1_len + n + 1);

	if (catStr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		catStr[i] = s1[i];

	for (j = 0; j < n; j++)
		catStr[i + j] = s2[j];

	catStr[i + j] = '\0';

	return (catStr);
}

