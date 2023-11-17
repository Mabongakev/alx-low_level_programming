#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - to find the length of a list
 * @h: head node
 * Return: elements length
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
