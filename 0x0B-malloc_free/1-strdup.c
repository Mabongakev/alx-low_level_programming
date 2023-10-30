#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * @str: a string to be pointed to
 * Return: string or NULL on fail
 */
char *_strdup(char *str)
{
	char *xyz;
	int k, l = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	xyz = malloc(sizeof(char) * (k + 1));
	if (xyz == NULL)
		return (NULL);
	for (l = 0 ; str[l] ; l++)
		xyz[l] = str[l];
	return (xyz);
}
