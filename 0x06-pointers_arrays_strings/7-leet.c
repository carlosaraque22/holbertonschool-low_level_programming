#include "holberton.h"
/**
 * leet - changes the letter
 * @s: the string to change
 * Return: a char pointer
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == letters[j])
			{
				*(s + i) = numbers[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
