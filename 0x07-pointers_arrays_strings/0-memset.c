#include "main.h"
/**
 * _memset - function fills the first n bytes
 * @s: dest to be pointed
 * @b: constant byte
 * @n: bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n; k++)
		s[k] = b;
	return (s);
}
