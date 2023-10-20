#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @k: pointer to the string parameter
 * Return: string
 */
char *rot13(char *k)
{
	int a, b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0 ; k[a] != '\0' ; a++)
	{
		for (b = 0 ; data1[b] != '\0' ; b++)
			if (k[a] == data1[b])
			{
				k[a] = datarot[b];
				break;
			}
	}

	return (k);
}
