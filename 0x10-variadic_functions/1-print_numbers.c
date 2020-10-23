#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, ii;
	for(i = 0; i < n; i++)
		if(separator == NULL)
			separator = "";
		for(ii = 0; separator[ii]; i++)
			printf("%d\n", i);
}
