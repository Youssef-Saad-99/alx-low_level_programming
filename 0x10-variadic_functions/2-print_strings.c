#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: first input
 * @n: second input
 * @...: the strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	int i;
	char *str;

	i = n;
	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (i--)
		printf("%s%s", (str = va_arg(a, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(a);
}
