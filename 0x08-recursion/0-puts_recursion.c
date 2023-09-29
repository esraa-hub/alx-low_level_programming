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
	if (!*s)
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(char *s);
}
