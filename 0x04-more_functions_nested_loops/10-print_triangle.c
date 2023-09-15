#include "main.h"

/**
 *  print_triangle - that checks the number sign
 *
 *  @size :lkcmsdlvmkslmslm
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((i * j) <= size)
					_putchar (" ");
				else
					_putchar ("#");
			}
			_putchar ("\n");
		}
	}
}
