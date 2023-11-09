#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: first input
 * @...: the intefers to sum
 *
 * Return: the integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int s, i;

	s = 0;
	i = n;

	if (!n)
		return (0);
	va_start(a, n);
	while (i--)
		s = s + va_arg(a, int);
	va_end(a);
	return (s);
}
