#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: a
 * @c: b
 * Return: s
 */

char *_strchr(char *s, char c)
{
while (c != *s && *s != '\0')
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (0);
}
}
