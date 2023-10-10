#include "dog.h"
#include <stdio.h>

/**
 *  print_dog-function that checks for lowercase character
 *
 * @d: the charcter to be checked
 *
 * Return:(void)
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->breed ? d->breed : "(nil)");
	}
}
