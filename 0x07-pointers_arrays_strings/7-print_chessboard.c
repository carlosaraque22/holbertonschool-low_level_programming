#include "holberton.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Array being evaluated
 */
void print_chessboard(char (*a)[8])
{
	int i, f;

	for (i = 0; i < 8; i++)
	{
		for (f = 0; f < 8; f++)
			_putchar(a[i][f]);
		_putchar('\n');
	}
}
