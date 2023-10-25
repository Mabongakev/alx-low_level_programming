#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - a function that printers the square root
 *@n: natural number
 * Return: square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates all natural square root
 * @n: number to calculate
 * @k: iterate number
 * Return: natural square root
 */
int _sqrt(int n, int k)
{
	int sqrt = k * k;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (k);
	}
	return (_sqrt(n, k + 1));
}
