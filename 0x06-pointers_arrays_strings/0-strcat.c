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
	int h, i;

for (h = 0; dest[h] != '\0'; h++)
{
}
for (i = 0 ; src[i] != '\0' ; ++i, h++)
{
dest[h] = src[i];
}
dest[h] = '\0';
return (dest);
}
