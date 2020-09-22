#include "holberton.h"

/**
 * int _isalpha(int c) - check the code for Holberton School students.
 *
 * @c: c is the name of the variable.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
