#include "main.h"

/**
 *  factorial-function that checks the number sign
 *
 * @n : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int factorial(int n)
{
	int ink = 1;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
	else
		{
			ink = n * factorial(n - 1);
			return (ink);
		}
	}
}
