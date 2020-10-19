#include <stdio.h>

/**
 * main - main function, wich cointains the printing function of the file.
 *
 * C Program that prints the name of the file it was compiled from.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
