#include "main.h"

/**
 *  print_most_numbers -function that checks the number sign
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar (i);
	}
	_putchar ('\n');
}
