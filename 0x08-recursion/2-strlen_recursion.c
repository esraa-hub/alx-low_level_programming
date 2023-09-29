#include "main.h"

/**
 *  _strlen_recursion-function that checks the number sign
 *
 * @s : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int _strlen_recursion(char *s)
{
	int ink;

	if (*s > '\0')
	{
		ink += _strlen_recursion(s + 1) + 1;
	}
	return (ink);
}

