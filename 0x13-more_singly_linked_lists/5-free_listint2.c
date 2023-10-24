#include "lists.h"
/**
 * free_listint2-thefun.
 *
 * @head:the arg.
 */
void free_listint2(listint_t **head)
{
	listint_t *dlt, *trans;

	if (!head)
		return;
	trans = *head;
	while (trans)
	{
		dlt = trans;
		trans = trans->next;
		free(dlt);
	}
	*head = NULL;
}
