#include "main.h"

/**
 * _abs - function that checks the number sign
 *
 * @n: the number to be checked
 *
 * Return: return 1 if 'n' is positive
 * otherwise  0 if 'n' is zero
 *  and -1 if 'n' is negative
 *
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
