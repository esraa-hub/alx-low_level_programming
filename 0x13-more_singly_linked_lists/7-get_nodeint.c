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
	int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
