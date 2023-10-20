#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: paremeter to be measured
 * Return: 0
 */
void print_number(int n)
{
	unsigned int k;

	k = n;
	if (n < 0)
	{
		_putchar(45);
		k = -k;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
