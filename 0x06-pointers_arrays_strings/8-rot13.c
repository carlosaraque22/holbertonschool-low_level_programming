#include "holberton.h"
/**
 * leet - changes the letter
 * @s: the string to change
 * Return: a char pointer
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROOT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == letters[j])
			{
				*(s + i) = ROOT13[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
