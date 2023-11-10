#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: integer to be checked
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int k, sum = 0;

	va_start(va, n);
	for (k = 0 ; k < n ; k++)
		sum += va_arg(va, int);
	va_end(0);
	return (sum);
}
