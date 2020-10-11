#include <stdio.h>

/**
 *main - program that prints the number of arguments passed into it.
 *
 *@argc: number of arguments passed.
 *
 *@argv: array of pointer to the arguments.
 *
 *Return: The return is 0 success and 1 error.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
