#include "main.h"

/**
 *  reverse_array -function that checks the number sign
 *
 * @a : the number to be checked
 * @n: the number to be checked
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j ; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
