#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int k;
	int l;

	for (k = 0 ; k <= 9 ; k++)
	{
		for (l = 0 ; l < 15 ; l++)
		{
			_putchar(l + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
