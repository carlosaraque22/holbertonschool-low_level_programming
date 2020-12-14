#include "holberton.h"

/**
 * _strncat - Appends the first num characters of source to destination.
 *
 * @dest: destination string.
 * @src: source string.
 * @n: max bye of src from dest
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int h, i;
for (h = 0; dest[h] != '\0'; h++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[h + i] = src[i];
	}
	return (dest);
}
