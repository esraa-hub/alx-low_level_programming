#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end-thefunction to print the listed link
 *
 * @head:the linked list to be printed
 * @str:cjnjjhffjh
 *
 * Return:the size ofe list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
