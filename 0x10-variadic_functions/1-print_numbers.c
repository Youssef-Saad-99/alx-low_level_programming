#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: first input
 * @n: second input
 * @...: the integers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	int i;

	i = n;
	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (i--)
	{
		printf("%d%s", va_arg(a, int),
				i ? (separator ? separator : "") : "\n");
	}
	va_end(a);
}
