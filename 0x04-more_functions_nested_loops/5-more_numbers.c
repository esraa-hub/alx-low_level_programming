#include "main.h"

/**
 *  more_numbers -function that checks the number sign
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar (49);
		_putchar (i % 10 + 48);
	}
	_putchar ('\n');
}
