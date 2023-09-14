#include "main.h"

/**
 *  print_line -function that checks the number sign
 *
 *  @n :lkcmsdlvmkslmslm
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (i = 0; i >= n ; i++)
			_putchar ('_');
	}
	else
		_putchar ('\n');
}
