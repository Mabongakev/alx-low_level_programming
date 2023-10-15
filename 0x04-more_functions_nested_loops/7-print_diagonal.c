#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: parameter to be checked
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k;
		int l;

		for (k = 0 ; k < n ; k++)
		{
			for (l = 0 ; l <= k ; l++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
