#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints numbers, followed by a new line.
 * @n: No. of the parameters to be passed
 * @separator: string to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int k;
	char *string;

	va_start(str, n);
	for (k = 0 ; k < n ; k++)
	{
		string = va_arg(str, char *);
	if (string == NULL)
		printf("nil");
	else
	{
		printf("%s", string);
	}
	if (k != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
