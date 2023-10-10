#include "dog.h"
#include <stdlib.h>

/**
 *  free_dog-function that checks for lowercase character
 *
 * @d: t rcter to be checked
 *
 * Return:(void)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
