#include "main.h"

/**
 * cap_string -function that checks the number sign
 *
 * @str : the number to be checked
 * Return: return 1 if 'c' is positive
 *  and ss1 if ' is negative
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '"' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0)
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
