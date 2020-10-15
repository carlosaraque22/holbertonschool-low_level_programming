#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - return a 2 dimension array with all 0.
 *
 * @width: width of matrix.
 * @height: height of matrix.
 *
 * Return: the 2 dimension array
 */

int **alloc_grid(int width, int height)
{
	int **d;
	int i = 0, ii = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	{
	d = (int **)malloc(height * sizeof(int *));
	}
	if (d == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		d[i] = (int *)malloc(sizeof(int) * width);
		if (d[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(d[i]);
			}
			free(d);
			return (NULL);
		}
	}
	for (i = 0; ii < width; ii++)
	{
		d[i][ii] = 0;
	}
	return (d);
}
