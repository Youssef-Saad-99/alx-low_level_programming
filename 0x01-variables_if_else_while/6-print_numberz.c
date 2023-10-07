#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit from 0 with putchar function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
