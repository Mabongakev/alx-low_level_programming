#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in ten new lines
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int k;
	char l;

	for (k = 0 ; k < 10 ; k++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
			_putchar(l);
		_putchar('\n');
	}
}
