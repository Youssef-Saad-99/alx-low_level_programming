#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: A function that prints all natural numbers from n to 98
 *
 * @n: takes integer number input
 *
 * Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%i, ", n);
			}
			n--;
		}
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%i, ", n);
			}
			n++;
		}
		putchar('\n');
	}
}
