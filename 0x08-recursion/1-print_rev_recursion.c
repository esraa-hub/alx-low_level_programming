#include "main.h"

/**
 *  _print_rev_recursion -that checks the number sign
 *
 * @s : the number to be checked
 *
 *  and -1 if 'c' is negative
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(char *s + 1);
		_putchar(s);
	}
}