#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that concatenates two strings
 * @s: string to be located
 * @c: character to be checked
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0 ; s[k] >= '\0' ; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (NULL);
}
