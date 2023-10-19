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

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}

}
