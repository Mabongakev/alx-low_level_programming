#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - to add a node at the end of a list
 * @n: No. of node
 * @head: pointer to the first node
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first_node, *end_node;

	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
		return (NULL);
	first_node->n = n;
	first_node->next = NULL;
	if (*head == NULL)
		*head = first_node;
	else
	{
		end_node = *head;
	while (end_node->next != NULL)
		end_node = end_node->next;
	end_node->next = first_node;
	}
	return (end_node);

}
