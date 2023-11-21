#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function to free a list
 * @head: pointer to the head's pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
}
