#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlistint_t
 * @head: first of the node
 * @index: Index of the node
 * Return: Index of the nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	k = 0;
	while (head != NULL)
	{
		if (k == index)
			break;
		head = head->next;
		k++;
	}
	return (head);
}
