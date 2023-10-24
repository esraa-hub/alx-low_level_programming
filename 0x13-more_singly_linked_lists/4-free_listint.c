#include " lists.h"
/**
 * free_listint-thefun.
 *
 * @head:the arg.
 */
void free_listint(listint_t *head)
{
	listint_t *dlt;

	while (head)
	{
		dlt = head;
		head = head->next;
		free(dlt);
	}
}

