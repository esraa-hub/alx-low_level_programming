#include "main.h"

/**
 *  _strlen-function that checks the number sign
 *
 * @s: the number if byte
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 *  str_concat-function that checks the number sign
 *
 * @s1: the number if byte
 * @s2: the number if byte
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
