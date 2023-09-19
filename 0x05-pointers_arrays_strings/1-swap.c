#include "main.h"

/**
 *  swap_int - function that checks the number sign
 *
 * @a : the number to be checked
 * @b : the number to be swap
 *
 *
 */

void swap_int(int *a, int *b)
{
	int emp;

	emp = *a;
	*a = *b;
	*b = emp;
}
