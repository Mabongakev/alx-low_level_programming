#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: head of the node
 * Return: No. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int k;

	k = 0;
	if (h == NULL)
		return (k);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
