#include "lists.h"
/**
 * sum_listint-thefun
 *
 * @head:dhdu
 * Return:dhjjduhjnu
 */
int sum_listint(listint_t *head);
{
	listint_t *trans;
	int sum = 0;

	if (!*head)
		return (0);
	trans = *head;
	while (!trans->next)
	{
		sum += trans->n;
		trans = trans->next;
	}
	return (sum);
}
