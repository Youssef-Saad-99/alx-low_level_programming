#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: first input
 * @b: second input
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: first input
 * @b: second input
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: first input
 * @b: second input
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 *
 * @a: first input
 * @b: second input
 *
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder
 *
 * @a: first input
 * @b: second input
 *
 * Return: remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
