#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function to  return the index n
 * @head: point of the first node
 * @index: to check the nth node
 *
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (k < index)
	{
		k++;
	if (head == NULL)
		return (NULL);
	head = head->next;
	}
	return (head);
}
