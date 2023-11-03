#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates memory
 * @ptr: pointer to the new memory
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *b;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		b = malloc(new_size);
	if (b == NULL)
		return (NULL);
	return (b);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	b = malloc(new_size);
	if (b == NULL)
		return (NULL);
	for (k = 0 ; k < old_size && k < new_size ; k++)
	{
		b[k] = ((char *) ptr)[k];
	}
	free(ptr);
	return (b);
}
