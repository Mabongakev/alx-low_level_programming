#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    	printf("Size of a char: %lh byte(s)", sizeof(char));
	printf("Size of a int: %lh byte(s)", sizeof(int));
	printf("Size of a long int: %lh byte(s)", sizeof(long int));
	printf("Size of a long long int: %lh byte(s)", sizeof(long long int));
    	return (0);
}
