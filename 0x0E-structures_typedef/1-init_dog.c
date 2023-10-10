#include "dog.h"

/**
 *  init_dog-function that checks for lowercase character
 *
 * @name: the charcter to be checked
 * @age: the charcter to be checked
 * @owner: the charcter to be checked
 * @d: the charcter to be checked
 *
 * Return:(void)
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
