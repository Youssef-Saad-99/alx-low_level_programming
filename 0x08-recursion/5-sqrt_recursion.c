#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: integer input
 *
 * Return: n does not have a natural square root, the function should return -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}

/**
 * _sqrt_helper - helper
 *
 * @n: first input
 * @start: second input
 * @end: third input
 *
 * Return: mid
*/

int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid == start)
	{
		return (mid);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_helper(n, mid, end));
	}
	else
	{
		return (_sqrt_helper(n, start, mid));
	}
}
