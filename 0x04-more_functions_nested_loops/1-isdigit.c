#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: parameter to be checked
 * Return: 1 (success) or 0 (fail)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 57)
		return (1);
	else
		return (0);
}
