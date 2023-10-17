#include "main.h"
/**
 * puts_half - a function that prints a string, in reverse
 * @str: parameter to be checked
 * Return: void
 */
void puts_half(char *str)
{
	int k, l, count = 0;

	for (k = 0 ; str[k] != '\0' ; k++)
		count++;
	l = (count - 1) / 2;
	for (k = l + 1 ; str[k] != '\0' ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
