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
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head->prev != NULL)
		head = head->prev;
	temp = head;
	free(temp);
	while (head->next != NULL)
	{	head = head->next;
		free(head);
	}

}
