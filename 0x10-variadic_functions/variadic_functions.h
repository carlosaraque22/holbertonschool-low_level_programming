#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - op of type struct
 * @c: char type c
 * @f: function associated
 */

typedef struct op
{
	char *c;
	void (*call_fun)();

} options;
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char c);
#endif
