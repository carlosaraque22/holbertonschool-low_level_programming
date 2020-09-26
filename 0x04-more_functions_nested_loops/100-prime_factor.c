#include <stdio.h>

/**
 * main - this is the entry point.
 *
 * Return: is not neccessary.
 */

int main(void)
{
unsigned long int n = 612852475143, div = 2, maxFact;

while (n != 0)
{
if (n % div != 0)
div = div + 1;
else
{
maxFact = n;
n /= div;
if (n == 1)
{
printf("%lu\n", maxFact);
break;
}
}
}
return (0);
}
