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
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
