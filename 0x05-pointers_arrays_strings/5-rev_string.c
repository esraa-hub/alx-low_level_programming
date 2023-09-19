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

	while (s[c])
		c++;
	char rev[c];

	for (i = c; i >= 0; i--)
	{	rev[i] = *s;
		s++;
	}
}
