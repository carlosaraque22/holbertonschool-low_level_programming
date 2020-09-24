#include "holberton.h"

/**
 * more_numbers - print the numbers 10 times, from 0 to 14.
 *
 * Return: is not neccessary
 */
void more_numbers(void)
{
int g, h;

for (g = 0; g < 10; g++)
{
for (h = 0; h <= 14; h++)
{
if (h > 9)
{
_putchar('0' + h / 10);
}
_putchar('0' + h % 10);
}
_putchar('\n');
}
}

