#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function to create an array
 * @size: size of an array
 * @c: character to be initialized
 * Return: point to the array if success else null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (k = 0 ; k < size ; k++)
		str[k] = c;
	return (str);
}
