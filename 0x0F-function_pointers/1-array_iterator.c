#include "function_pointers.h"
/**
 * array_iterator-THE FUNJHSIDFH.
 *
 * @array:the name to type.
 * @size: the pointer to function name.
 * @action:the pointer to function name.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
