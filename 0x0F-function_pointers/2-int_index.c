#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches an int
 * @array: the array
 * @size: size of an array
 * @cmp: comparison function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (k = 0 ; k < size ; k++)
	{
		if (cmp(array[k]) == 1)
			return (k);
	}
	return (-1);
}
