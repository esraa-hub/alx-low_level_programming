#include "lists.h"
/**
 * add_nodeint_end-the fun.
 *
 * @head:thearg
 * @n:thearg
 *
 * Return:the return
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *trans;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		trans = *head;
		while (trans->next)
			trans = trans->next;
		trans->next = new;
	}
	return (new);
}
