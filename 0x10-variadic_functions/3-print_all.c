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

void print_all(const char * const format, ...) {
  // Declare variables.
  va_list args;
  char type;
  int i;
  float f;
  char *s;

  // Initialize the variadic list.
  va_start(args, format);

  // Iterate over the format string.
  i = 0;
  while (format[i] != '\0') {
    // Get the type of the next argument.
    type = format[i];

    // Print the argument according to its type.
    switch (type) {
      case 'c':
        printf("%c", va_arg(args, char));
        break;
      case 'i':
        printf("%d", va_arg(args, int));
        break;
      case 'f':
        printf("%f", va_arg(args, float));
        break;
      case 's':
        s = va_arg(args, char *);
        if (s == NULL) {
          printf("(nil)");
        } else {
          printf("%s", s);
        }
        break;
      default:
        // Ignore any other characters in the format string.
        break;
    }

    // Increment the format string index.
    i++;
  }

  // Clean up.
  va_end(args);

  // Print a new line at the end.
  printf("\n");
}
