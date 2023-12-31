#include "main.h"

/**
 *  _strdup-function that checks the number sign
 *
 * @str: the number if byte
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}

