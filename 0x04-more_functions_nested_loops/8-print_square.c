#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: A function that prints a square
 *
 * @size: takes integer number input
*/

void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
