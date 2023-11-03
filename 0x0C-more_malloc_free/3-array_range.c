#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - range of a array
 * @min: min range
 * @max: max range
 * Return: int value
 */
int *array_range(int min, int max)
{
	int *b, k = 0;

	if (min > max)
		return (NULL);
	b = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (b == NULL)
		return (NULL);
	while (min <= max)
	{
		b[k] = min;
		k++;
		min++;
	}
	return (b);
}
