#include "holberton.h"

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
