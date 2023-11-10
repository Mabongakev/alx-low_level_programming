#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints numbers, followed by a new line
 * @format: different data types
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int k;
	int l;
	char *abc;

	va_list ls;

	va_start(ls, format);
	k = 0;
	while (format != NULL && format[k] != '\0')
	{
		switch (format[k])
		{
			case 'c':
				printf("%c", va_arg(ls, int));
				l = 0;
				break;
			case 'i':
				printf("%d", va_arg(ls, int));
				l = 0;
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				l = 0;
				break;
			case 's':
				abc = va_arg(ls, char *);
				if (abc == NULL)
					abc = "(nil)";
				printf("%s", abc);
					break;
			default:
				l = 1;
				break;
		}
		if (format[k + 1] != '\0' && l == 0)
			printf(", ");
	}
	printf("\n");
	va_end(ls);
}


