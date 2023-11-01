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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
