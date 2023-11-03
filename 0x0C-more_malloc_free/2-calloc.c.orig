#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/** 
 * _calloc - function that allocates memory for an array
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = calloc(nmemb, size);
	if (b == NULL)
		return (NULL);
	else
		return (b);
}
