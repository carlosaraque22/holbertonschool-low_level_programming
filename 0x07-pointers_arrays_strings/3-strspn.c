#include "holberton.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i, len;
	len = 0;
	for(j = 0; accept[j] != '\0'; j++)
	{
		if(s[i] == accept[j])
			
			len++;
		break;
	}
		if(s[i] != accept[j])
		break;
	return(len);
}
	    
