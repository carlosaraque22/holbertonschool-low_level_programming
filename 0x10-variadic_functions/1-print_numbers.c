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
	int num = 0;
	va_list valist;

		if (separator == NULL)
		{
			separator = "";
		}
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			num = va_arg(valist, int);
			printf("%d", num);
			{
			if (i != (n - 1))
				printf("%s", separator);
			}
		}
		va_end(valist);
		printf("\n");
}
