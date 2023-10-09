#include <stdio.h>
/**
 * main - Entry point
 *
 * Retun: Always 0
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		if (m != 'q' && m != 'e')
			putchar(m);
	putchar('\n');
	return (0);
}
