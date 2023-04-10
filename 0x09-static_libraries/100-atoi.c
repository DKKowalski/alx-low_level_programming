#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    /* Skip any leading whitespace */
    while (*s == ' ') {
        s++;
    }

    /* Check for a leading '+' or '-' */
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    /* Parse the digits */
    while (*s >= '0' && *s <= '9') {
        /* Check for overflow */
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10)) {
            /* Overflow occurred */
            if (sign == -1) {
                return INT_MIN;
            } else {
                return INT_MAX;
            }
        }

        /* Add the digit to the result */
        result = result * 10 + (*s - '0');
        s++;
    }

    /* Apply the sign and return the result */
    return sign * result;
}

