#include "main.h"
/**
 * is_prime_number - functions that returns a prime number
 * @n: number to  be checked
 *
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - to check  a prime number
 * @n: prime number to  be checked
 * @m: iterative value
 *
 * Return: prime number
 */
int _prime(int n, int  m)
{
	int prime = m * 1;

	if (prime == n)
		return (1);
	else
		return (m);
	if (n < 0)
		return (0);
	return (_prime(n, m + 1));
}
