#include "main.h"

/**
 * _pow_recursion - function that returns the
 *	 value of x raised to the power of y
 *
 * @x: first integer input
 * @y: second integer input
 *
 * Return: y is lower than 0, the function should return -1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
