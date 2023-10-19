#include "list.h"
/**
 * print_list-thefunction to print the listed link
 *
 * @h:the linked list to be printed
 *
 * Return:the size ofe list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d}%s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}
