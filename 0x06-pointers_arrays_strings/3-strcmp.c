#include "main.h"

/**
 *  _strcmp -function that checks the number sign
 *
 * @s1 : the number to be checked
 * @s2: the number to be checked
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
int _strcmp(char *s1, char *s2)
{
	int ret = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			ret = ((int) *s1 - 48) - ((int) *s2 - 48);
			beark;
		}
		s1++;
		s2++;
	}
	return (ret);
			[
}
