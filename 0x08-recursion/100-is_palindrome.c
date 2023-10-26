#include "main.h"
/**
 * _strlen_recursion - a function that returns a string
 * @s: string to be checked
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comp - a function that compares characters
 * @s: string to be checked
 * @a: small iterator
 * @b: bigger iterator
 * Return: void
 */
int comp(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + comp(s, a + 1, b - 1));
	}
	return (0);
}
/**
 * is_palindrome - a function that returns a string of a palindrome
 * @s: string to be checked
 * Return: void
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (comp(s, 0, _strlen_recursion(s) - 1));
}
