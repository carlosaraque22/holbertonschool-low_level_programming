#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, ii;
	va_list valist;
	va_start(valist, n)

		if(separator == NULL)
			separator = "";
	
		for(i = 0; i < n; i++)
			printf("%d\n", i);
}
