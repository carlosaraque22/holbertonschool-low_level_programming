#include "holberton.h"

/**
 * _strspn - function
 * @s: String
 * @accept: Bytes
 *
 * Return: N
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			len++;
		break;

		}
	}
		if (s[i] != accept[j])
		break;
	}
	return (len);
}
