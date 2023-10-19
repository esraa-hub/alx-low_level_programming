#include "list.h"
/**
 * print_list-thefunction to print the listed link
 *
 * @h:the linked list to be printed
 *
 * Return:the size ofhe list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d}%s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
	}
	return (counter);
}