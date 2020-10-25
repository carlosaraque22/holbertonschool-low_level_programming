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
	for (i = 0; i < n - 1; i++)
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
	putchar('\n');
}
