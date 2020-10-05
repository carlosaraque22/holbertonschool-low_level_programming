#include "holberton.h"

char *_strchr(char *s, char c)
{
	unsigned int i;
	for( i = 0; i != '\0'; i++)
	{
		if( c == s[i])
		{
			break;
		}
	}
	return(s);
}
