#include "main.h"

/**
 * _memset-function that checks the number sign
 *
 * @s: the number to be checked
 * @n:the number to be checked
 * @b :heumber to be checked
 *
 * Return: return 1 if 'c' is positive
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc-function that checks the number sign
 *
 * @size: the number to be checked
 * @nmemb: the number to be checked
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
