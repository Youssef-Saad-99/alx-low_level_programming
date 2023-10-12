#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: A function that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 13; n2++)
		{
			_putchar(n2 + '0');
		}
		_putchar('\n');
	}
}
