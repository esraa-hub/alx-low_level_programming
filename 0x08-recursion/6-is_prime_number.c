#include "main.h"
int devid(int n, int i);
/**
 * is_prime_number -function that checks the number sign
 *
 * @n : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 *oit00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */

int is_prime_number(int n)
{
	return (devid(n, 2));
}
/**
 * devid-function that checks the number sign
 *
 * @n : the number to be checked
 * @i : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 *oit00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int devid(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0 || n <= 1)
		{
			return (0);
		}
	else
	{
		return (devid(n, i + 1));
	}
	}
}
