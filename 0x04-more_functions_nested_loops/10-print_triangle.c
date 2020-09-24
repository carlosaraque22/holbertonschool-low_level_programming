#include "holberton.h"

/**
 * print_triangle - print the triangles
 *
 *@size: the name of the variable.
 *
 * Return: is not neccessary.
 */
void print_triangle(int size)
{

int abc, def, ghi;

if (size <= 0)
_putchar('\n');
for (abc = 0; abc < size; abc++)
{
for (def = size - abc; def > 1; def--)
_putchar(' ');
for (ghi = abc + def; ghi >= 1; ghi--)
_putchar('#');
_putchar('\n');
}
}
