#include <stddef.h>
#include <math.h>
/**
 * binary_to_uint - Convert a
 * binary number to an unsigned integer
 * @b: The binary number as a string
 *
 * Return: The converted unsigned integer,
 * or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
unsigned int decimal_num = 0;
size_t len = strlen(b);

/* Check if input string is valid binary string */
for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);  /* Return 0 to indicate error */
}
}

    /* Convert binary string to integer */
for (i = 0; i < len; i++)
{
decimal_num += (b[i]-'0') * pow(2, len-i-1);
}

return (decimal_num);
}

