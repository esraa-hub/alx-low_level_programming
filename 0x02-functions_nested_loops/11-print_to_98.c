#include "main.h"

/**
 * print_to_98 - function that checks the number sign
 *
 * @n: the number iato be checked
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	prinf("98\n");
}
