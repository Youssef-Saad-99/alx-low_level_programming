#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: A function that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int n1, n2, n3;

	for (n1 = 1; n1 <= 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			n3 = n2;
			if (n2 > 9)
			{
				_putchar(1 + 48);
				n3 = n2 % 10;
			}
			_putchar(n3 + 48);
		}
		_putchar('\n');
	}
}
