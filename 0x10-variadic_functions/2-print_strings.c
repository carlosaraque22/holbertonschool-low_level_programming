#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list valist;
	va_start(valist, n);

	if(separator == NULL)
	{
		separator = "";
	}
	for(i = 0; i < n - 1; i++)
	{
		str = va_arg(valist, char *);
		printf("%s%s", str, separator);
	}
	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s\n", va_arg(valist, char *));
	va_end(valist);
}
