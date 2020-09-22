#include "holberton.h"

/**
 * times_table - create a table of multiplication facts.
 *
 *Return is not neccessary
 */
void times_table(void)
{
int j, g;
for (j = 0; j <= 9; j++)
{
g = 0;
_putchar ('0');
for (g = 1; g <= 9; g++)
{
if ((j * g) <= 9)
{
_putchar (',');
_putchar (' ');
_putchar (' ');
_putchar (j * g + '0');
}
else
{
_putchar (',');
_putchar (' ');
_putchar (j * g / 10 + '0');
_putchar (j * g % 10 + '0');
}
}
_putchar ('\n');
}
}

