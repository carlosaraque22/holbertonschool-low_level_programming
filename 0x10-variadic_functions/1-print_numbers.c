#include "variadic_functions.h"

/**
 * print_numbers - function num one by one all arguments.
 * @n: n arguments
 * @separator: characters as separator
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
		if (separator == NULL)
		{
			separator = "";
		}

		for (i = 0; i < n; i++)
		{
			printf("%i%s", va_arg(valist, int), separator);

		}
		va_end(valist);
		printf("\n");
}
