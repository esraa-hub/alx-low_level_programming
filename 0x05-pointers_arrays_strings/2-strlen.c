#include "main.h"

/**
 *  _strlen -function that checks the number sign
 *
 *  @s :lkcmsdlvmkslmslm
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		++l;
	}
	return (l);
}
