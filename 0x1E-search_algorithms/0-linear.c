#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
