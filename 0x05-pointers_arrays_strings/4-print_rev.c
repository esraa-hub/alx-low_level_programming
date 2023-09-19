#include "main.h"

/**
 *  print_rev -function that checks the number sign
 *
 *  @s :lkcmsdlvmkslmslm
 *
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	while (c--)
		_putchar(s[i]);
	_putchar('\n');
}
