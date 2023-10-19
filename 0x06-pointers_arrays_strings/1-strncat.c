#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @n: number of bytes
 * @dest: file destination
 * @src: file source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (l < n && src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
