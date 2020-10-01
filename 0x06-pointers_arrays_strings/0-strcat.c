#include "holberton.h"

/**
 * _strcat - Appends the first num characters of source to destination.
 *
 * @dest: destination string.
 * @src: source string.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int h, i, a;
for (h = 0 ; dest[h] != '\0'; ++h)
		{
		}
	for (i = 0 ; src[i] != '\0' ; ++i)
	{
	}
for (a = 0; a != i ; ++a)
		{
			dest[h] = src[a];
			++h;
		}
	dest[h + 1] = '\0';
	return (dest);
}
