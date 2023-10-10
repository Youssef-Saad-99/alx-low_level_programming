#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A function that prints all natural numbers from n to 98
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

int main(viod)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
