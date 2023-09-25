#include "main.h"

/**
 *  _memset -function that checks the number sign
 *
 * @s : the number to be checked
 * @b: the number to be checked
 * @n : the number if byte
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		*s = b;
		i++;
		s++;
	}
	return (s);
}
