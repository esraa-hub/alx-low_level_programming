#include "main.h"

/**
 *  _pow_recursion-function that checks the number sign
 *
 * @x : the number to be checked
 * @y : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			res = x * _pow_recursion(x, y - 1);
			return (res);
		}
	}
}
