#include " lists.h"
/**
 * free_listint-thefun.
 *
 * @head:the arg.
 */
void free_listint(listint_t *head)
{
	listint_t *d;

	while (head)
	{
		d = head;
		head = head->next;
		free(d);
	}
}

