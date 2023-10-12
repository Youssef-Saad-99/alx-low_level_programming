#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: A function that prints a triangle
 *
 * @size: takes integer number input
*/

void print_triangle(int size)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if ((i + j) <= n)
				{
					_putchar(' ');
				}
				else
				{
					putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
