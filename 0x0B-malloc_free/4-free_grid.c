#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees up frees a 2 dimensional grid previously created by your.
 *
 * @grid: pointers to hold pointer
 * @height: height of the grid
 *
 * Return: is not neccessary.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
