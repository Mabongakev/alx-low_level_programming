#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int cur;
	unsigned long int exl = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		cur = exl >> k;
		if (cur & 1)
			count++;
	}
	return (count);
}
