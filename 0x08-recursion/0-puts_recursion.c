#include "main.h"

/**
 *  _puts_recursion -that checks the number sign
 *
 * @s : the number to be checked
 *
 *  and -1 if 'c' is negative
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		__putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
