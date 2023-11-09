#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - a program to print operation code
 * @a: address of the main pointer
 * @n: number of bytes
 * Return: void
 */
void print_opcodes(int n, char *a)
{
	int k;

	for (k = 0 ; k < n ; k++)
	{
		printf("%.2hhx", a[k]);
	if (k < n - 1)
		printf(" ");
	}
	printf("\n");
}
/**
 * main - print of opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
