#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len-thefunction to print the listed link
 *
 * @h:the linked list to be printed
 *
 * Return:the size ofe list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
