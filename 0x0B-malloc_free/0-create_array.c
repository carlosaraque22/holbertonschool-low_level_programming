#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of a spacific size and fill with a char.
 *
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
		return (NULL);
	{
		d = (char *)malloc(size * sizeof(char));
	}
	if (d == NULL)
		return (NULL);
	{
		for (i = 0; i < size; i++)
			d[i] = c;
		return (d);
	}
}
