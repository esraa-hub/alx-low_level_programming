#include "function_pointers.h"
/**
 * print_name-THE FUNJHSIDFH.
 *
 * @name:the name to type.
 * @f: the pointer to function name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
