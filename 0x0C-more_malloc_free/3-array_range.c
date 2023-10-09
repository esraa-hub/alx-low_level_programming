#include "main.h"

/**
 * array_range-function that checks the number sign
 *
 * @max: the number to be checked
 * @min: the number to be checked
 *
 * Return: return 1 if 'c' is positive
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
}
