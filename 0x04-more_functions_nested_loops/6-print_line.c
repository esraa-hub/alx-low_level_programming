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
	int i;

	if (n <=  0)
		_putchar ('\n');
	else
	{
		for (i = 1; i <= n ; i++)
			_putchar ('_');
		_putchar ('\n');
	}
}
