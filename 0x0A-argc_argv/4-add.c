#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the name of a program
 * @argc: No. of arguments
 * @argv: arrays of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	int k, l, add = 0;

	for (k = 1 ; k < argc ; k++)
	{
		for (l = 0 ; argv[k][l] != '\0' ; l++)
		{
			if (!isdigit(argv[k][l]))
			{
				printf("Error\n");
				return (0);
			}
		}
		add += atoi(argv[k]);
	}
	printf("%d\n", add);
	return (0);
}
