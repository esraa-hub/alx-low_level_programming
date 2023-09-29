#include "main.h"

/**
 * _sqrt_recursion-function that checks the number sign
 *
 * @n : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int square(int n, int val);
int _sqrt_recursion(int n);
{
	return (square(n, 1));
}
/**
 *  square -function that checks the number sign
 *
 * @n : the number to be checked
 * @val : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else
	{
		if (val * val < n)
		return (square(n, val + 1));
	}
	else
		return (-1);
}
