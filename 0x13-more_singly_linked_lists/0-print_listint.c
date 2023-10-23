#include "lists.h"
#include <stdio.h>
/**
 * print_listint-hte functonjfk
 *
 * @h:the fkgjkjmkjk.
 *
 * Return:hgjjgkmkfkj.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}

