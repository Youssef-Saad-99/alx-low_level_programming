#include "variadic_functions.h"

/**
 * format_char - formats char
 * @separator: input
 * @a: argument pointer
 */

void format_char(char *separator, va_list a)
{
	printf("%s%c", separator, va_arg(a, int));
}

/**
 * format_int - formats integer
 * @separator: input
 * @a: argument pointer
 */

void format_int(char *separator, va_list a)
{
	printf("%s%d", separator, va_arg(a, int));
}

/**
 * format_float - formats integer
 * @separator: input
 * @a: argument pointer
 */

void format_float(char *separator, va_list a)
{
	printf("%s%f", separator, va_arg(a, double));
}

/**
 * format_string - formats integer
 * @separator: input
 * @a: argument pointer
 */

void format_string(char *separator, va_list a)
{
	char *str = va_arg(a, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: the format string
 */

void print_all(const char * const format, ...)
{
	va_list a;
	int i;
	char *separator;

	i = 0;
	separator = "";
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(a, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].tokens)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, a);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
