#include "main.h"

/**
 *  rev_string -function that checks the number sign
 *
 *  @s :lkcmsdlvmkslmslm
 *
 */
void rev_string(char *s)
{
	int i, c = 0;
	char rev;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (c = 0; c < i / 2; c++)
	{	rev = s[c];
		s[c] = s[i - 1 - c];
		s[i - 1 - c] = rev;
	}
}
