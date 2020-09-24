#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void (Success)
 */
int main(void)
{
int g;

for (g = 1; g <= 100; g++)
{
if ((g % 3 == 0) && (g % 5 == 0))
{
printf("FizzBuzz");
}
else if (g % 3 == 0)
{
printf("Fizz");
}
else if (g % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", g);
}
if (g != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
