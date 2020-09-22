#include "holberton.h"

/**
 * print_last_digit - function to the determine last digit
 *
 * @y: the name of the variable
 *
 * Return: the value of the last digit
 */
int print_last_digit(int y)
{
y = y % (10);
if (y < 0)
{
y = y * (-1);
}
_putchar (y + '0');
return (y);
}
