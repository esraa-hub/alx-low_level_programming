#include "main.h"

/**
 * print_last_digit - function that checks the number sign
 *
 * @n: the number to be checked
 *
 * Return: return 1 if 'n' is positive
 * otherwise  0 if 'n' is zero
 *  and -1 if 'n' is negative
 *
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}
