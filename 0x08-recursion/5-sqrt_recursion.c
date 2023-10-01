#include "main.h"
int square(int n, int val);
/**
 * _sqrt_recursion-function that checks the number sign
 *
 * @n : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 *oit00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}
/**
 *  square -function that checks the number sign
 *
 * @n : the number to be checked
 * @val : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ooo`:wqt00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int square(int n, int val)
{
	if (val * val > n)
		return (-1);
	if (val * val == n)
		return (val);
	return (square(n, val + 1));

}
