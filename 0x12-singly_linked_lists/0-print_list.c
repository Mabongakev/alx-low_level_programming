#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - print all nodes of the list
 * @h: head of the singly data
 * Return: void
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		elements++;
		h = h->next;
	}
	return (elements);
}
