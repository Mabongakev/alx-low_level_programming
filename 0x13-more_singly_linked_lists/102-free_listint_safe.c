#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _ra - reallocates memory to pointers
 * @lst: the old list
 * @sz: size of the new list
 * @node: new pointer to be appended to the new node
 * Return: void
 */
listint_t **_ra(listint_t **lst, size_t sz, listint_t *node)
{
	listint_t **nwlst;
	size_t k;

	nwlst = malloc(sz * sizeof(listint_t *));
	if (nwlst == NULL)
	{
		free(lst);
		exit(98);
	}
	for (k = 0; k < sz - 1; k++)
		nwlst[k] = lst[k];
	nwlst[k] = node;
	free(lst);
	return (nwlst);
}
/**
 * free_listint_safe - free the list
 * @head: pointer to the pointer head
 * Return: Always 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t k, nm = 0;
	listint_t **lst = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (nm);
	while (h != NULL)
	{
		for (k = 0; k < nm; k++)
		{
			if (*h == lst[k])
			{
				*h = NULL;
				free(lst);
				return (nm);
			}
		}
		nm++;
		lst = _ra(lst, nm, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(lst);
	return (nm);
}
