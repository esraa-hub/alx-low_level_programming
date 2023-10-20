#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	list_t *new, *current_node;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		*head = new;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new;
	}
	return (*head);
}
