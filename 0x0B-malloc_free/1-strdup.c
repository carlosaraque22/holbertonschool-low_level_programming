#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create an array and copy from str.
 *
 *  @str: This is a string.
 *
 * Return: If bigger than size (i) : NULL, if its NULL : NULL
 */

char *_strdup(char *str)
{
	char *d;
	int i, ii;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		d = (char *) malloc(sizeof(char) * i + 1);
	}
	if (d == NULL)
		return (NULL);
	{
		for (ii = 0; ii < i; ii++)
			d[ii] = str[ii];
		return (d);
	}
}
