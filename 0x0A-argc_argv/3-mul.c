#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that multiplies two numbers.
 *
 *@argc: number of arguments passed for the multiplication.
 *
 *@argv: array of pointer to the arguments.
 *
 *Return: The return is 0 success and 1 error.
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)

			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	return (0);
}
