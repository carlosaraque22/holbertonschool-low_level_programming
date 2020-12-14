#include "holberton.h"

/**
 * _isdigit - The isdigit function checks whether a character.
 *
 *@c: c is the name of the variable.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
