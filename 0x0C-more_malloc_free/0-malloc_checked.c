#include "main.h"

/**
 *  malloc_checked-function that checks the number sign
 *
 * @b: the number to be checked
 *
 * Return: return 1 if 'c' is positive
 *  and -1 if 'c' is negative
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = (int *)malloc(sizeof(int));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
