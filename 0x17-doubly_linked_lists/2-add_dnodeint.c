#include "lists.h"

/**
 * add_dnodeint-djkvjhkhfdg
 * @head:vdkjvnkdvndkfkdjkjg
 * @n:djcsdjsdljdk
 * Return:sdlknvdfkdfnl
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	distint_t *new = malloc(sizeof(distint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}