#include <stdio.h>

/**
 * _abs - Entry main
 *
 * Description: A function that computes the absolute value of an integer
 *
 *@n: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return ((-1) * n);
	}
}