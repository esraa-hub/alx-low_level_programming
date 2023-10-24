#include "lists.h"
/**
 * sum_listint-thefun
 *
 * @head:dhdu
 * Return:dhjjduhjnu
 */
int sum_listint(listint_t *head);
{
	listint_t *trans = head;
	int sum = 0;

	while (trans != NULL)
	{
		sum += trans->n;
		trans = trans->next;
	}
	return (sum);
}
