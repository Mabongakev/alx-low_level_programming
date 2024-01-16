#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: number of bytes
 * @dest: file destination
 * @src: file source
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0 ; b < n ; b++)
		dest[b] = src[b];

	return (dest);
}
