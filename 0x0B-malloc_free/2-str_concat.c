#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concates
 * @s1: string original
 * @s2: string to be concated
 * Return: void
 */
char *str_concat(char *s1, char *s2)
{
	int k = 0, l = 0, m = 0, n = 0;
	char *d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k])
		k++;
	while (s2[l])
		l++;
	m = k + l;
	d = malloc((sizeof(char) * m) + 1);
	if (d == NULL)
		return (NULL);
	l = 0;
	while (m < n)
	{
		if (m <= n)
			d[m] = s1[m];
		if (m >= k)
		{
			d[m] = s2[l];
			l++;
		}
		m++;
	}
	d[m] = ('\0');
	return (d);
}
