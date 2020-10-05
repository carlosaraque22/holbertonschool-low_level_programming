#include "holberton.h"

/**
 * _memset - prints buffer in hexa
 * @n: the address of memory to print
 * @s: s
 * @b: b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;
	for(i = 0; i < n; i++)
	{
		*s = b;
	}
			return (s);
}

