#include "holberton.h"

/**
 * string_toupper - Returns a copy of this string converted to uppercase.
 *
 * @s: a string
 *
 * Return: is 0.
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
		}
