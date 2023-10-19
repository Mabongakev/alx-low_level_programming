#include "main.h"
/**
 * cap_string - function that capitalizes
 * @d: string to be capitalize
 * Return: pointer to the string
 */


char *cap_string(char *d)
{
	int k;

	k = 0;
	while (d[k])
	{
		while (!(d[k] >= 'a' && d[k] <= 'z'))
			k++;
		if (d[k - 1] == ' ' ||
		d[k - 1] == '\t' ||
		d[k - 1] == '\n' ||
		d[k - 1] == ',' ||
		d[k - 1] == ';' ||
		d[k - 1] == '.' ||
		d[k - 1] == '!' ||
		d[k - 1] == '?' ||
		d[k - 1] == '"' ||
		d[k - 1] == ';' ||
		d[k - 1] == '(' ||
		d[k - 1] == ')' ||
		d[k - 1] == '{' ||
		d[k - 1] == '}' ||
		k == 0)
			d[k] -= 32;
		d++;
	}
	return (d);
}
