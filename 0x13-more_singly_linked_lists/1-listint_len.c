#include "list.h"
#include <stdio.h>

/**
 * listint_len-thefun.
 *
 * @h:theinput.
 *
 * Return:the output.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
