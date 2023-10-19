#include "main.h"
/**
 * reverse_array - function that reverses a string
 * @a: array of char
 * @n: length of the string
 * Return: dest
 */
void reverse_array(int *a, int n)
{
	int d;
	int f;

	for (d = 0 ; d  < n-- ; d++)
	{
		f = a[d];
		a[d] = a[n];
		a[n] = f;
	}
}
