#include "variadic_functions.h"
/**void formate_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
void formate_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));

}
void formate_string(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
*/
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
    va_list args;
    va_start(args, format);

    int i = 0;
    char c;
    float f;
    char *s;

    while (format[i] != '\0')
    {
        if (format[i] == 'c')
        {
            c = (char)va_arg(args, int);
            printf("%c", c);
        }
        else if (format[i] == 'i')
        {
            int num = va_arg(args, int);
            printf("%d", num);
        }
        else if (format[i] == 'f')
        {
            f = (float)va_arg(args, double);
            printf("%f", f);
        }
        else if (format[i] == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
        }

        i++;
    }

    va_end(args);
    printf("\n");
}
