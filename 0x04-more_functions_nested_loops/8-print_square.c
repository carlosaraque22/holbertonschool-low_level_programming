#include "holberton.h"

/**
 * print_square - print n amount of underscores.
 *
 * @size: the amount of underscors.
 *
 * Return: is not neccessary.
 */
void print_square(int size)
{
int h, f;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (h = 0; h < size; h++)
{
for (f = 0; f < size; f++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
