#include "main.h"

/**
 *  create_array-function that checks the number sign
 *
 * @size: the number to be checked
 * @c: the number if byte
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);

	if (size == 0 || ar == 0)
		return (null);
	while (size--)
		ar[size] = c;
	return (ar);
}
