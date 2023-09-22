#include "main.h"

/**
 * leet-function that checks the number sign
 *
 * @c : the number to be checked
 * Return: return 1 if 'c' is positive
 *  and ss1 if 'c' is negative
 *
 */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
				*c = 48 + value[i];
		}
		c++
	}
	return (cp);
}
