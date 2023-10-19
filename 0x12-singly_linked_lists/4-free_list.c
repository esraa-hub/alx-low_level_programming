#include "lists.h"
#include <stdlib.h>
/**
 * free_list-the function
 *
 * @head:the address
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		temp = temp->next;
		free(temp->str);
		free(temp);
	}

}
