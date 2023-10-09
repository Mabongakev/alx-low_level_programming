#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	putchar('\n');
	return (0);
}
