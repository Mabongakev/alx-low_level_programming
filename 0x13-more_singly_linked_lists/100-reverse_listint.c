#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a list
 * @head: pointer to the head pointer
 * Return: Always 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;
	while (*head != NULL)
	{
		new = temp->next;
		(*head)->next = temp;
		temp = *head;
		if (new == NULL)
			return (*head);
		*head = new;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
