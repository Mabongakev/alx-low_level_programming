#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of a program
 * @argc: No. of arguments
 * @argv: arrays of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	int k = 0;
	int m = 0;

	if (argc == 3)
	{
		k = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", k * m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
