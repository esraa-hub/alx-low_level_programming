#include "main.h"

/**
 *  _memcpy -function that checks the number sign
 *
 * @dest : the number to be checked
 * @src: the number to be checked
 * @n : the number if byte
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
