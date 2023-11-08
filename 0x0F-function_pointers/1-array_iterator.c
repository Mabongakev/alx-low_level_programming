#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints a function of an element
 * @size: size of an array
 * @array: the array
 * @action: function that prints a element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0 ; k < size ; k++)
		action(array[k]);
}
