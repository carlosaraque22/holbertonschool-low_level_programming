#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: char 1
 * @s2: char 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{

	char *d;
	int i, ii, j, k; 
	

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (ii = 0; s2[ii] != 0; ii++)
	{
	}

	d = (char *) malloc((i + ii) * sizeof(char) + 1);

	if (d == NULL)
		return (0);

	for (j = 0; s1[j] != '\0'; j++)
	{
		d[j] = s1[j];
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		d[j + k] = s2[k];
	}
	return (d);
}
