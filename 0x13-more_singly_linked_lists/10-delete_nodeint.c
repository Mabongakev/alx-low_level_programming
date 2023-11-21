#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that delets a node
 * @head: pointer to the head pointer
 * @index: link part of the node
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *temp;
	listint_t *new;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (k = 0; k < index && -1 && temp != NULL && index != 0; k++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		new = temp->next;
		free(temp);
		*head = new;
	}
	else
	{
		if (temp->next == NULL)
			new = temp->next->next;
		free(temp->next);
		temp->next = new;
	}
	return (1);
}
