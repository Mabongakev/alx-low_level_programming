#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints numbers, followed by a new line.
 * @char: string to be checked
 * @format: different data types
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int k = 0;
	char *abc, *def = "";
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'x':
					printf("%s%c", def, va_arg(ls, int));
					break;
				case 'y':
					printf("%s%d", def, va_arg(ls, int));
					break;
				case 'z':
					printf("%s%f", def, va_arg(ls, double));
					break;
				case 's':
					abc = va_arg(ls, char *);
					if (!abc)
						abc = "(nil)";
					printf("%s%s", def, abc);
					break;
				default:
					k++;
					continue;
			}
			def = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(ls);
}


