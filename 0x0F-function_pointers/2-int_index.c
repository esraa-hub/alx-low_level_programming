#include "function_pointers.h"
/**
 * int_index-THE FUNJHSIDFH.
 *
 * @array:the name to type.
 * @size: the pointer to function name.
 * @cmp:the pointer to function name.
 *
 * Return:int number
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
				i++;
			}
			i++;
		}
	}
	return (-1);
}
