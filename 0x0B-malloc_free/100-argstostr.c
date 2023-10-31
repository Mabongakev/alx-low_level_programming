#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  a function that concatenates all the arguments
 * @ac: argument count
 * @av: argument vetor
 * Return: a point to the array of a character
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	b = 0;
	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			b++;
		}
		c = 0;
		b++;
	}
	s = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			s[d] = av[b][c];
			d++;
			c++;
		}
		s[d] = '\n';
		c = 0;
		d++;
		c++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
