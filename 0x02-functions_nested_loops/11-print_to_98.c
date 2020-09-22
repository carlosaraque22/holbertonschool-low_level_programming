#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98  - print numbers n to 98.
 *
 * @n: the name of the variable.
 *
 * Return: print to stdout numbers n to 98 followed by a newline.
 */
void print_to_98(int n)
{
int x;
if (n >= 98)
{
for (x = n; x >= 98; x--)
{
printf("%i", x);
if (x != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else
{
for (x = n; x <= 98; x++)
{
printf("%i", x);
if (x != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
}
