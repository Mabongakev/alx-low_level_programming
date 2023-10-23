#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: first occurrence of the substring
 * @needle: parameter to be checked
 * Return: dest
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	if (*needle == *haystack)
		return (haystack);

	while (*haystack)
	{
		k = 0;

		if (haystack[k] == needle[k])
		{
			do
			{
				if (needle[k] + 1 == '\0')
					return (haystack);

				k++;
			} while (haystack[k] == needle[k]);
		}

		haystack++;
	}

	return (0);
}
