#include "holberton.h"

/**
 * jack_bauer - Write a function that prints every minute of the day.
 *
 * Return: print every minute from 00:00 to 23:59
 */
void jack_bauer(void)
{
int d,ca,b,va,apple;
apple = 9;
for (d = 0; d <= 2; d++)
{
for (ca = 0; ca <= apple; ca++)
{
for (b = 0; b <= 5; b++)
{
for (va = 0; va <= 9; va++)
{
if (d == 2)
apple = 3;
}
_putchar (d + '0')
_putchar (ca + '0')
_putchar (':')
_putchar (b + '0')
_putchar (va + '0')
_putchar ('\n')
}
}
}
}
}
