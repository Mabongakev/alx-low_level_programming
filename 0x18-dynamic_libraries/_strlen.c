#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string to be counted
 * Return: length of a string
 */
int _strlen(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;
	return (count);
}
