#include "main.h"
/**
 * rev_string - a function that prints a string, in reverse
 * @s: to print a reserve string
 * Return: void
 */
void rev_string(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;
	for (k = 0 ; k <  count / 2 ; k++)
	{
		char l;

		l = s[k];
		s[k] = s[count - 1 - k];
		s[count - 1 - k] = l;
	}

}
