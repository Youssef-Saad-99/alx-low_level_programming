#include "main.h"

/**
 * int factorial(int n) - function that returns the factorial of a given number 
 * 
 * @n: integer input
 *
 * Return: -1 if n < 0, Factorial of 0 is 1
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
