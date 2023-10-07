#include <stdio.h>

/**
 * main - Entry point
 * Description: print all digit base 10 from 0
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf(n);
		n++;
	}
	putchar('\n');
	return (0);
}
