#include "main.h"

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
	int i = 0;
	int j = _strlen(s) - 1;

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
