#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all
 * @head: first node of list
 * Return: the sum
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
