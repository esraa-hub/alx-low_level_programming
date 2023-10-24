#include "lists.h"
/**
 * get_nodeint_at_index-vbgtr.
 * @head:hgbfjbhbhj
 * @index:vgknkbnkjnf
 *
 * Return:kgrbkgbkb
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *wnt;
	int i;

	if (!head)
		return (NULL);
	for (i = 0, wnt = head; i < index; i++)
		wnt = wnt->next;
	if (!wnt)
		return (NULL);
	return (wnt);
}
