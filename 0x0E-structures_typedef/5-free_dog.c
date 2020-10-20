#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all the dogs.
 * @d: the dogs pointer.
 * Return: is not neccessary.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
