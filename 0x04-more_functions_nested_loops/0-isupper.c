#include "holberton.h"

/**
 * _isupper - checks whether a character is lowercase alphabet .
 *
 *@c: c is the name of the variable.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
