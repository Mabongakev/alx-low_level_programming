#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to be concatenated
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;
	k = malloc(sizeof(char) * d + 1);
	if (k == NULL)
		return (NULL);
	c = 0;
	while (b < d)
	{
		if (b <= a)
			k[b] = s1[b];
		if (b >= a)
		{
			k[b] = s2[c];
			c++;
		}
		b++;
	}
	k[b] = '\0';
	return (k);
}
