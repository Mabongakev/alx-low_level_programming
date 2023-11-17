#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - to add a node at the end of the list
 * @head: start of the node
 * @str: string of the list
 *
 * Return: end node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode, *tmp;
	unsigned int k, count = 0;

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	endnode->len = count;
	endnode->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = endnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = endnode;
	}
	return (*head);

}
