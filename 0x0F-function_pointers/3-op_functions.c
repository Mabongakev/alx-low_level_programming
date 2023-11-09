#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add function
 * @a: first element
 * @b: 2nd element
 * Return: return sum of the two elements
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction function
 * @a: first element
 * @b: 2nd element
 * Return: return the difference of the two elements
 *
 */
int op_sub(int a, int b)
{
        return (a - b);
}
/**
 * op_mul - multiplication function
 * @a: first element
 * @b: 2nd element
 * Return: return the multplication of the two elements
 *
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 * op_div - division function
 * @a: first element
 * @b: 2nd element
 * Return: return the result of the two elements
 *
 */
int op_div(int a, int b)
{
        return (a / b);
}
/**
 * op_mod - modulo function
 * @a: first element
 * @b: 2nd element
 * Return: return the remainder of the two elements
 *
 */
int op_mod(int a, int b)
{
        return (a % b);
}
