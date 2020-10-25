#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @n: n arguments
 * @separator: characters as separator
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list valist;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str != '\0')
		{
			printf("%s", str);
		}
		else
			printf("(nil)");
		{
			if (i != n - 1)
			printf("%s", separator);
		}
	}
	va_end(valist);
	putchar('\n');
}
