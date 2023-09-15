#include "main.h"

/**
 *  print_diagonal -function that checks the number sign
 *
 *  @n :lkcmsdlvmkslmslm
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
 
void print_diagonal(int n)
{
	int i, j;

	if (n <=  0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
}
