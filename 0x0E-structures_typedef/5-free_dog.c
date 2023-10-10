#include "dog.h"
#include <stdio.h>

/**
 *  free_dog-function that checks for lowercase character
 *
 * @d: te rcter to be checked
 *
 * Return:(void)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
