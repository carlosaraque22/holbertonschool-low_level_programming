#include <stdio.h>

/**
 *main - program that prints all arguments it receives.
 *
 *@argc: number of arguments passed.
 *
 *@argv: array of pointer to the arguments.
 *
 *Return: The return is 0 success and 1 error.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
