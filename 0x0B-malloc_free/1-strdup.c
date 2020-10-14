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
	int i;
	int ii = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
	{
		ii++;
	}
		d = malloc(sizeof(char) * ii + 1);
		if (d == NULL)
	{
		return (NULL);
	}
		{
			for (i = 0; i < ii; i++)
			d[i] = str[i];
			return (d);
		}
}
