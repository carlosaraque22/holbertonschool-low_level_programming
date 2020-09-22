#include "holberton.h"

/**
 * _abs - compute absolute value of integer
 *
 * @v: integer
 *
 * Return: return absolute value for an integer
 */
int _abs(int v)
{
if (v < 0)
{
v = v * (-1);
return (v);
}
else
return (v);
}
