#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @l: function parameter
 * Return: k
 */
int print_last_digit(int l)
{
	int k;

	k = l % 10;
	if (l < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
