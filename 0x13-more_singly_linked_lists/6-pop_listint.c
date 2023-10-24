#include "lists.h"
/**
 * pop_listint-thefun.
 *
 * @head:the arg.
 * Return:int.
 */
int pop_listint(listint_t **head)
{
	listint_t *nhead;
	int n;

	if (!head || !*head)
		return (0);
	nhead = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nhead;
	return (n);


}
