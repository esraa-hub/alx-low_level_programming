#include "variadic_functions.h"
/**
 * format_char-returns the sum of all its parameters.
 *
 * @separtor:The number of parametrs.
 * @ap:The parameters to be summed.
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int-returns the sum of all its parameters.
 *
 * @separtor:The number of parametrs.
 * @ap:The parameters to be summed.
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float-returns the sum of all its parameters.
 *
 * @separtor:The number of parametrs.
 * @ap:The parameters to be summed.
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
/**
 * format_string-returns the sum of all its parameters.
 *
 * @separtor:The number of parametrs.
 * @ap:The parameters to be summed.
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	{
		case 1:
			str = "(nil)";
	}
	printf("%s%s", separator, str);
}
/**
 * print_strings-returns the sum of all its parameters.
 *
 * @n:The number of parametrs.
 * @...:The parameters to be summed.
 * @separator:theseparator between.
 *
 * Return:The sum f all the parameters.
 */
void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				token[j].(separator.ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
