#include "main.h"

/**
 *  _strspn -function that checks the number sign
 *
 * @s: the number to be checked
 * @accept: the number if byte
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
unsigned int _strspn(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] ==  '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}

