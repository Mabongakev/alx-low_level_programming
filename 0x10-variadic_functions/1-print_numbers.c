#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: No. of the parameters to be passed
 * @separator: string to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int k;

	va_start(ls, n);
	for (k = 0 ; k < n ; k++)
	{
		printf("%d", va_arg(ls, int));
		if (ls != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
