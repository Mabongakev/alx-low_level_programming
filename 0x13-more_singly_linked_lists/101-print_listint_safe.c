#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _r - reallocates memory to pointers
 * @lst: the old list
 * @sz: size of the new list
 * @node: new pointer to be appended to the new node
 * Return: void
 */
const listint_t **_r(const listint_t **lst, size_t sz, const listint_t *node)
{
	const listint_t **nwlst;
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
 * print_listint_safe - a function taht prints a list
 * @head: pointer to the first node
 * Return: Always 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t k, nm = 0;
	const listint_t **lst = NULL;

	while (head != NULL)
	{
		for (k = 0; k < nm; k++)
		{
			if (head == lst[k])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(lst);
				return (nm);
			}
		}
		nm++;
		lst = _r(lst, nm, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(lst);
	return (nm);
}
