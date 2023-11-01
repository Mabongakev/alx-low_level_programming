#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: No. of arguments
 * @argv: arrays of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	int a, b = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	b = atoi(argv[1]);
	while (a > 0)
	{
		if (a >= 25)
			a -= 25;
		else if (a >= 10)
			a -= 10;
		else if (a >= 5)
			a -= 5;
		else if (a >= 2)
			a -= 2;
		else if (a >= 1)
			a -= 1;
		b += 1;
	}
	printf("%d\n", b);
	return (0);
}

