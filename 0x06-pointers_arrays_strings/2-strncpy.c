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
int h, i;
for (h = 0; src[h] != '\0'; h++)
{
}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > h; h++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
