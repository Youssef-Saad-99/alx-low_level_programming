#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: A function that draws a diagonal line on the terminal
 *
 * @n: takes integer number input
*/

void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
}
