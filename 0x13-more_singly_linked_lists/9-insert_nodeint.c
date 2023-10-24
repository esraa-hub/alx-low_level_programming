#include "lists.h"
/**
 * insert_nodeint_at_index- thefun.
 *
 * @head:the arg.
 * @idx:thearg.
 * @n:thearg
 * Return:thefri
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *trans;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (-1);
	new->n = n;
	trans = *head;
	for (i = 0; i < idx; i++)
	{
		if (trans == NULL)
			return (-1);
		trans = trans->next;
	}
	new->next = trans->next;
	trans->next = new;
	return (new);
}

