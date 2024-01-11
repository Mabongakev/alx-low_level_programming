#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the list
 * @h: head of the node
 * Return: No. of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int k;

	k = 0;
	if (h == NULL)
		return (k);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}
	return (k);
}
