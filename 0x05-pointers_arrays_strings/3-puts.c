#include "main.h"

/**
 *  _puts -function that checks the number sign
 *
 *  @str :lkcmsdlvmkslmslm
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
