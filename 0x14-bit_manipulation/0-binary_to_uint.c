#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * @b: pointer to as string
 * Return: void
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int n;

	n = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		n <<= 1;
		if (b[k] == '1')
			n += 1;
	}
	return (n);
}
