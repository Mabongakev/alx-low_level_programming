#include "main.h"
/**
 * factorial - a function that returns the factorial of a number
 * @n: factor to be checked
 *
 * Return: void
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
