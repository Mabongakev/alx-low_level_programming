#include "main.h"
/**
 * _strcat - a  function appends the src string to the dest string
 * @dest: last string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int scrlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	while (src[scrlen] != '\0')
	{
		dest[destlen] = src[scrlen];
		destlen++;
		scrlen++;
	}
	return (dest);
}
