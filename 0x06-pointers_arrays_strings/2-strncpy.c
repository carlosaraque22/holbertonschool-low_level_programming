#include "holberton.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: max byte of src from dest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h, i, g;
for (h = 0; src[h] != '\0'; h++)
{
}
if (h < n)
{
	for (i = 0; i < h; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	}
else
{
	for (g = 0; g < n; g++)
	{
		dest[g] = src[g];
	}
}
	return (dest);
}
