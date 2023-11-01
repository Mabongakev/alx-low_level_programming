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
	int k;

	for (k = 0 ; k < argc ; k++)
		printf("%s\n", argv[k]);
	return (0);
}

