#include "main.h"
/**
 * swap_int - a function that swaps the values of two integer
 * @a: value 1
 * @b: value 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
