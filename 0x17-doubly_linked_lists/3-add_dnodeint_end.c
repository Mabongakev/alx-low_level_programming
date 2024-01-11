#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adding a node at the end of a list
 * @head: first node
 * @n: data
 *
 * Return: node on success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *h;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = end_node;
	}
	else
	{
		*head = end_node;
	}
	end_node->prev = h;
	return (end_node);
}
