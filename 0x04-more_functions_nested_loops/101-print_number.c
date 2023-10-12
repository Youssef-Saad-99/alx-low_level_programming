#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: A function that prints an integer
 *
 * @n: takes integer number input
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(nmm / 10);
	_putchar((num % 10) + 48);
}
