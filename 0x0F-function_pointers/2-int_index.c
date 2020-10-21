#include <stdio.h>
#include <stddef.h>

/**
 * int_index - sog
 * @array: name of dog
 * @size: age of dog
 * @cmp: owner of dog
 * Return: return always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
