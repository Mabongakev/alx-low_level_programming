#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - memory allocation
 * @b: size of the memory
 * Return: new pointer
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	else
		return (a);
}
