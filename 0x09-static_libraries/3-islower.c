#include "main.h"
/**
 * _islower - Checks for lower characters
 * @c: parameter to be checked
 * Return: 1 or 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
