#include "holberton.h"

char *_strchr(char *s, char c)
{
		while(c != *s && *s != '\0')
		{
			s++;
		}
	return(s);
}
