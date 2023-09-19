#include "main.h"

/**
 *  print_array -function that checks the number sign
 *
 *  @a : array ls iks kcmsdlvmkslmslm
 *  @n : size of array
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
}
