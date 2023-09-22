#include "main.h"

/**
 * isLower-function that checks the number sign
 *
 * @c : the number to be checked
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and ss1 if 'c' is negative
 *
 */
int isLower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
/**
 * isDelimiter -function that checks the number sign
 *
 * @c : the number to be checked
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and ss1 if 'c' is negative
 *
 */
int isDelimiter(char c)
{
	int i;
	int delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return  (1);
		return (0);
	}
}
/**
 * cap_string -function that checks the number sign
 *
 * @s : the number to be checked
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and ss1 if 'c' is negative
 *
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int findDelimter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			findDelimter = 1;
		else if (isLower(*s) && findDelimter == 1)
		{
			*s -= 32;
			findDelimter = 0;
		}
		else
		{
			findDelimter = 0;
		}
		s++;
	}
	return (ptr);
}
