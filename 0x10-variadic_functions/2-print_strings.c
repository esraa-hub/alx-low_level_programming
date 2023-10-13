#include "variadic_functions.h"
/**
 * print_strings-returns the sum of all its parameters.
 *
 * @n:The number of parametrs.
 * @...:The parameters to be summed.
 * @separator:theseparator between.
 *
 * Return:The sum f all the parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
  va_start(args, n);

  if (separator != NULL) {
    printf("%s", separator);
  }

  for (unsigned int i = 0; i < n; i++) {
    const char *str = va_arg(args, char *);
    if (str == NULL) {
      printf("(nil)");
    } else {
      printf("%s", str);
    }

    if (separator != NULL && i < n - 1) {
      printf("%s", separator);
    }
  }

  va_end(args);

  printf("\n");
}
/**	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nill)",
				i ? (separator ? separator : " ") : "\n");
	va_end(ap);
	*/
}
