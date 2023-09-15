#include "main.h"

/**
 *  print_square -function that checks the number sign
 *
 * @size :vjnskdcvnksj
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (i = 1; i <= size ; i++)
		{
			for (j = 1; j <= size ; j++)
				_putchar (35);
			_putchar ('\n');
		}
	}

}
