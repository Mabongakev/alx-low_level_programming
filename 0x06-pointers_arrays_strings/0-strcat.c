#include "main.h"
/**
 * *_strcat - a  function appends the src string to the dest string
 * *dest: last string
 * *src: source string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int scrlen = 0;
	int k;

	for (k = 0 ; destlen[k] != '\0' ; k++)
		destlen++;
	for (k = 0 ; scrlen[k] != '\0' ; k++)
		srclen++;
	for (k = 0 ; <= srclen ; k++)
		dest[destlen + 1] = scrlen[k];
	return (dest);
}
