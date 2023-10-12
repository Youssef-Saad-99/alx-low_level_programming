#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: A function that draws a straight line in the terminal
 *
 * @n: takes integer number input
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
