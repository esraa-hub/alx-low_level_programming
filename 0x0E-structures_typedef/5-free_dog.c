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
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
