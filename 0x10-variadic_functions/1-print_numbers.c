#include "variadic_functions.h"
/**
 * print_numbers-returns the sum of all its parameters.
 *
 * @n:The number of parametrs.
 * @...:The parameters to be summed.
 * @separator:theseparator between.
 *
 * Return:The sum of all the parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : " ") : "\n");
	va_end(ap);
}
