#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function to add a node in the list
 * @idx: index of the node
 * @n: n. of nodes
 * @head: pointer to the head pointer
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *list;
	listint_t *tmp = *head;

	list = malloc(sizeof(listint_t));
	if (!list || !head)
		return (0);
	list->n = n;
	list->next = NULL;
	if (idx == 0)
	{
		list->next = *head;
		*head = list;
	}
	return (list);
	for (k = 0; tmp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			list->next = tmp->next;
		}
		tmp->next = list;
		return (list);
	}
		if (k == idx - 1)
		{
			tmp = tmp->next;
		}
		return (NULL);
}
