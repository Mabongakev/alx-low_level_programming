#include "main.h"
/**
 * print_line - draws a straight line
 * @n: parameter to be checked
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int k;

		for (k = 1 ; k <= n ; k++)
			_putchar('_');
		_putchar('\n');
	}
}
