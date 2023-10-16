#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that prints a string, in reverse
 *
 * @s: takes string input
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
