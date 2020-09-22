#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * is not neccesary the return
 */
void print_alphabet_x10(void)
{
int g;
char h;

for (g = 0; g < 10; g++)

{

for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar('\n');
}
}
