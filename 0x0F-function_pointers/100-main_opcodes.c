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
	int bytes, i;
	char *arr;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;


	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}

		printf("%02hhx ", arr[i]);
	}
	return (0);
}

