#include "main.h"

/**
 *  _strncat -function that checks the number sign
 *
 * @dest: the number to be checked
 * @src: the number to be checked
 * @n : the numbber of b=pru=onter
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	while (dest[c])
		c++;
	for (i = 0; i <= n && src[i]; i++)
	{
		dest[c] = src[i];
		c++;
	}
}
