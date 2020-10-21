#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate in the array and execute the function action
 * @array: the array
 * @size: the size of the array
 * @action: the function of action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
