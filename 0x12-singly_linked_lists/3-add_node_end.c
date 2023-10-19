#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node-thefunction to print the listed link
 *
 * @h:the linked list to be printed
 *
 * Return:the size ofe list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new ;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while(str[i])
		i++;
	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
