#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
if (hour < 10)
{
_putchar('0');
_putchar('hour');
}
_putchar('hour');
_putchar(':');
if (minute < 10)
{
_putchar('0');
_putchar('minute');
}
_putchar('minute');
}
}
}

