#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - a fucntion that finds a loop in a list
 * @head: pointer to the first node
 * Return: void
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	a = b = head;
	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
		{
			a = head;
			break;
		}
		if (!a || !b || !b->next)
			return (NULL);
		while (a != b)
		{
			a = a->next;
			b = b->next;
		}
	}
	return (b);
}
