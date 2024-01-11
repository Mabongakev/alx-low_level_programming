#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - a function that frees a list
 * @head: the first node
 * Return: an empty list on success
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	free(head->prev);
	free(head);
}
