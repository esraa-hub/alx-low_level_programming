#include "main.h"

/**
 * string_nconcat-function that checks the number sign
 *
 * @n: the number to be checked
 * @s2: the number to be checked
 * @s1: the number to be checked
 *
 * Return: return 1 if 'c' is positive
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_len = 0, s2_len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
