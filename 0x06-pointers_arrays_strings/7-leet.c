#include "main.h"
/**
 * leet - function that encodes
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int m, p;
	char s4[] = "aAeEoOtTlL";
	char s5[] = "4433007711";

	for (m = 0 ; n[m] != '\0' ; m++)
	{
		for (p = 0 ; p < 10 ; p++)
		{
			if (n[m] == s4[p])
			{
				n[m] = s5[p];
			}
		}
	}
	return (n);
}
