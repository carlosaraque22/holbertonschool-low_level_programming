#include "holberton.h"

/**
 * print_diagonal - prints diagonals.
 *
 * @n: length of diagonal.
 *
 * Return: is not neccessary.
 */
void print_diagonal(int n)
{
int i, g;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (g = 0; g <= i; g++)
{
if (i==g)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar (' ');
}
}
}
}
} 
