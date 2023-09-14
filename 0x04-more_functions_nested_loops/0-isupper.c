#include "main.h"

/**
 *  _isupper- function that checks the number sign
 *
 * @c: the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
int _isupper(int c)
{
	char c;

	if (c >= '65' && c <= '90')
		return (1);
	else
		return (0);
	 _putchar ('\n');

}
