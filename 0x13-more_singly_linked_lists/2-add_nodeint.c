#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - to add a node at the beginning
 * @head: head node
 * @n: No. of nodes
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);
	node1->n = n;
	node1->next = *head;
	*head = node1;
	return (node1);
}
