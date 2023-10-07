#include "main.h"

/**
 *  _strcat -function that checks the number sign
 *
 * @dest: the number to be checked
 * @src: the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
char *_strcat(char *dest, char *src)
{
	int c, d;

	c = 0;
	while (dest[c])
		c++;
	for (d = 0; src[d]; d++)
	{
		dest[c] = src[d];
		c++;
	}
	return (dest);
}
