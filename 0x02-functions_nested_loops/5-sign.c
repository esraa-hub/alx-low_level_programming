#include "main.h"

/**
 * print_sign - function that checks the number sign
 *
 * @n: the number to be checked
 *
 * Return: return 1 if 'n' is positive
 * otherwise  0 if 'n' is zero
 *  and -1 if 'n' is negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}


}
