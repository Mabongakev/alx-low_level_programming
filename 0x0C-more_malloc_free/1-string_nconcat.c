#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to be concatenated
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0 ; s1[k] != '\0' ; k++)
		s1len++;
	for (k = 0 ; s2[k] != '\0' ; k++)
		s1len++;
	b = malloc(sizeof(char) * (s1len + n) + 1);
	if (b == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (k = 0 ; s1[k] != '\0' ; k++)
			b[k] = s1[k];
		for (k = 0 ; s2[k] != '\0' ; k++)
			b[s1len + 1] = s2[k];
		b[s1len + 1] = '\0';
	}
	else
	{
		for (k = 0 ; s1[k] != '\0' ; k++)
			b[k] = s1[k];
		for (k = 0 ; k < n ; k++)
			b[s1len + 1] = s2[k];
		b[s1len + 1] = '\0';
	}
	return (b);
}
