#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: A function that prints the sign of a number
 *
 * @n: takes integer type input for function
 *
 * Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
