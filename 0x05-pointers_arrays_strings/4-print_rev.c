#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that prints a string, in reverse
 *
 * @s: takes string input
*/

void print_rev(char *s)
{
	if (!s)
	{
		return;
	}
	int i;
	int j = _strlen(s) - 1;

	i = 0;
	while (i < j)
	{
		char c = s[i];

		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	printf("%s\n", s);
}
